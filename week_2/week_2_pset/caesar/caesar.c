#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool is_digit(string str);
void caesar_convert(string plaintext, int key);



int main(int argc, string argv[])
{


    if (argc != 2 || atoi(argv[1]) < 0 || !is_digit(argv[1]))
    {

        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext:  ");

    caesar_convert(plaintext, key);


    return 0;

}

void caesar_convert(string plaintext, int key)
{
    char encrypted_string[strlen(plaintext) + 1];
    for (int i = 0, n = strlen(plaintext); n > i; i++)
    {
        char current_char = plaintext[i];

        if (isalpha(current_char))
        {

            if (65 <= current_char && current_char <= 90)
            {
                char encrypted_char = (current_char - 65);
                encrypted_char = encrypted_char + key;
                encrypted_char = encrypted_char % 26;
                encrypted_char = encrypted_char + 65;

                encrypted_string[i] = encrypted_char;
            }
            else if (97 <= current_char && current_char <= 122)
            {
                char encrypted_char = (current_char - 97);
                encrypted_char = encrypted_char + key;
                encrypted_char = encrypted_char % 26;
                encrypted_char = encrypted_char + 97;

                encrypted_string[i] = encrypted_char;
            }

        }
        else
        {
            encrypted_string[i] = current_char;
        }
    }

    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); n > i; i++)
    {
        printf("%c", encrypted_string[i]);
    }
    printf("\n");
}


bool is_digit(string str)
{
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (!isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}
