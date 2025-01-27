#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


bool key_check(string key);
void encrypt_plaintext(string plaintext, string key);

int main(int argc, string argv[])
{
    if (argc != 2 || !key_check(argv[1]))
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string plaintext = get_string("plaintext:  ");

    encrypt_plaintext(plaintext, argv[1]);

}


void encrypt_plaintext(string plaintext, string key)
{

    int n = strlen(plaintext);

    printf("ciphertext: ");
    for (int i = 0; n > i; i++)
    {
        char current_char = plaintext[i];

        if (65 <= current_char && current_char <= 90)
        {
            int ascii_val_diff = plaintext[i] - 65;

            if (97 <= key[ascii_val_diff] && key[ascii_val_diff] <= 122)
            {
                printf("%c", (key[ascii_val_diff] - 32));
            }

            else
            {
                printf("%c", key[ascii_val_diff]);
            }
        }
        else if (97 <= current_char && current_char <= 122)
        {
            int ascii_val_diff = plaintext[i] - 65 - 32;

            if (97 <= key[ascii_val_diff] && key[ascii_val_diff] <= 122)
            {
                printf("%c", (key[ascii_val_diff]));
            }
            else
            {
                printf("%c", (key[ascii_val_diff] + 32));
            }


        }
        else
        {
            printf("%c", current_char);
        }

    }
    printf("\n");
}





bool key_check(string key)
{
    // return true if the key has: 26 char, chars are unique, chars are alpha

    char key_array[52] = {'\0'}; // make array w/ 52 null spots
    int n = strlen(key); // get length of key string
    if (n != 26) // return false if key string length is not 26
    {
        return false;
    }
    for (int i = 0; n > i; i++) // loop through key string
    {
        char current_char = key[i];
        if (!isalpha(current_char)) // return false if current char in key string loop is not alphabetical
        {
            return false;
        }
        else
        {
            if (65 <= current_char && current_char <= 90) // if the current char is CAP
            {

                int ascii_val_diff = current_char - 65;

                if (key_array[ascii_val_diff] != '\0')
               {

                    return false;
               }
               else
               {
                    key_array[ascii_val_diff] = current_char;
               }
            }
            else // else the current char is by default lower
            {
               int ascii_val_diff = current_char - 65 - 6;
               if (key_array[ascii_val_diff] != '\0')
               {
                    return false;
               }
               else
               {
                    key_array[ascii_val_diff] = current_char;
               }
            }
        }
    }
    return true;
}
