#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1); // + 1 for the \0 null char
    if (t == NULL) // if malloc fails return 1 instead of doing string copy below.
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i <= n; i++) // i <= n to include the \0 null char of the string s in the copy
    {
        t[i] = s[i];
    }
    
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); 
}