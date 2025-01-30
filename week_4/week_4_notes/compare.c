#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = get_string("i: ");
    char *t = get_string("j: ");

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}