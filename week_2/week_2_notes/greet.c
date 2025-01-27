#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);

}

// ---

#include <cs50.h>
#include <stdio.h>


int main(int argc, string argv[])
{
    printf("hello, %s\n", argv[1]);
}

// ---

#include <cs50.h>
#include <stdio.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}

// ---

#include <cs50.h>
#include <stdio.h>


int main(int argc, string argv[])
{
   for (int i = 0; i < argc; i++)
   {
    printf("%s\n", argv[i]);
   }
}