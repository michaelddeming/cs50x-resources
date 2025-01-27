#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

// ---

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string s = get_string("Input: ");
    printf("Output: ");
    int length = strlen(s);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}