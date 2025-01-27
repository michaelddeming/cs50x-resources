// hello.c

#include <stdio.h> // header file

int main(void)
{
    printf("hello, world\n"); // printf --> format 
    // C requires double quotes for strings
}

// --------------------------------------------

#include <cs50.h> // cs50 codespace only

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer); // %s is a "placeholder" for the variable, and now arguemnt,"answer" to be inserted.

}

// ----------------------------------------------

// compare.c

#include <cs50.h> // cs50 codespace only
#include <stdio.h>

int main(void)
{
    int x = get_int("What's your x? ");
    int y = get_int("What's your y? ");

    if (x < y)
    {
        printf("x is less than y/n");
    }
    else if (x > y)
    {
        printf("x is greater than y/n");
    }
    else
    {
        printf("x is equal to y\n");
    }

}

// ----------------------------------------------

// agree.c

#include <cs50.h> // cs50 codespace only
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? "); //get_char is CS50 codespace specific

    if (c == 'y' || c == 'Y') // single char need single quotes 'c'
    {
        printf("Agree.\n");
    }
    else if (c == 'n' || c == 'N') // || = 'or'
    {
        printf("Not agree.");
    }
}

// ----------------------------------------------

// cat.c

#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++; // decrease i by 1 every loop through 
    }
}

// -----

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}

// -----

#include <stdio.h>
#include <cs50.h> // cs50 codespace only
int main(void)
{
    while (true) // true is used in cs50 codespace only, use <stdbool.h> instead
    {
        printf("meow\n");
    }
}

// -----

#include <stdio.h>

void meow(void); // "prototype" of function listed at top of (functions that exist in the file, to handle ordering issues).

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow()
    }
}

void meow(void)
{
    printf("meow\n");
}

// -----

#include <stdio.h>

void meow(int n); // prototype
int get_positive_int(void); // prototype

int main(void)
{
    meow(3)
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

// -----

#include <stdio.h>

void meow(int n); // prototype

int main(void)
{
    int times = get_positive_int()
    meow(times);
}

int get_positive_int(void) // returns an int
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    return n; // returns n 
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

// ----------------------------------------------

// mario.c

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?") 
    }
    printf("\n")
}

// -----

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("?\n") 
    }
   
}

// -----

#include <stdio.h>

int main(void)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("#");
        }
        printf("\n");
    }
   
}

// -----

#include <stdio.h>

int print_row(int n);

int main(void)
{   
    int n = 3
    for (int row = 0; row < n; row++)
    {
        print_row(n)
    }
}

int print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

// ----------------------------------------------

// calculator.c

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y");

    printf("%i\n", x + y);
}

// -----

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");

    printf("%i\n", x * 2);
}

// -----

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long dollars = 1;
    while (true)
    {
        char c = get_char("Here's $%li. Double it and give it to the next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
        
    } printf("Here's $%li.\n", dollars)
}

// -----

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y");

    printf("%.5f\n", (float) x / y); // 'casting' x / y as (float) to avoid truncation of int remaining int
    // %.5f formats floats to 5 decimals
}


