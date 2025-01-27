// LINEAR SEARCH

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50}; // default values will be in {}

    int n = get_int("Number: ");

    for (int i = 0, i < 7; i++) //use strlen()?
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

// ----------------------------------------------

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string stirngs[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0) // strcmp() will return a 0 if the strings are the same
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n")
    return 1;
}
