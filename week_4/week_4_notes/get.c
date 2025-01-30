#include <stdio.h>

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);
    printf("n: %i\n", n);
}

// --------------------------------

#include <stdio.h>

int main(void)
{
    char* s;
    printf("s: ");
    scanf("%s", s); //scan the terminal and save the sequence of char's given by user, at the memory location of s. Not scanf("%s", &s) bc char* s is already a memory address)
    printf("n: %i\n", n);
}
