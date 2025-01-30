#include <stdio.h>

int main(void)
{
    int n = 50; // n is an int and takes up 4 bytes in memory
    int *p = &n; // asking what's the address of n? and storing it in the 'pointer' p
    printf("%p\n", p);
}

// --------------------------------

#include <stdio.h>

int main(void)
{
    int n = 50; // n is an int and takes up 4 bytes in memory
    printf("%p\n", &n);
}

// --------------------------------

#include <stdio.h>

int main(void)
{
    int n = 50; // n is an int and takes up 4 bytes in memory
    int *p = &n; // asking what's the address of n? and storing it in the 'pointer' p. the 'int' declartion says the pointer points to an integer variable, n. 
    printf("%i\n", *p);
}

// --------------------------------

#include <stdio.h>

int main(void)
{
    char * s = "Hi!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

// --------------------------------

#include <stdio.h>

int main(void)
{
    char * s = "Hi!";
    printf("%c\n", *s);   
    printf("%c\n", *(s + 1));   // pointer arithmetic
    printf("%c\n", *(s + 2));   
}
