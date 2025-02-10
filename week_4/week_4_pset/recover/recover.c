#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("./recover file.raw\n");
        return 1;
    }

    char* file_name = argv[1];

    FILE* input_file = fopen(file_name, "r");

    if (input_file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    int size = 512;
    int count = 0;
    uint8_t buffer[512];
    FILE* output = NULL;


    while (fread(buffer, 1, 512, input_file) == 512)
    {

        if (buffer[0] == 0xFF && buffer[1] == 0xd8 && buffer[2] == 0xFF)
        {
            if (buffer[3] >= 0xe0 && buffer[3] <= 0xef)
            {
                if (output != NULL)
                {
                    fclose(output);
                }
                char filename[20];
                sprintf(filename, "%03d.jpg", count);
                count++;
                output = fopen(filename, "w");
                if (output == NULL)
                {
                    printf("Failed to open file.\n");
                    return 1;
                }
            }
        }
        if (output != NULL)
        {
            fwrite(buffer, 1, 512, output);
        }

    }
    if (output != NULL)
        {
            fclose(output);
        }
    fclose(input_file);
    return 0;
}
