#include <stdio.h>
#include <cs50.h>


void print_repeat(int n, char c);

int main(void)
{
    int rows;
    do
    {
        rows = get_int("How many rows? ");
    }
    while (rows < 1 || rows > 8);

    char brick = '#';
    char space = ' ';
    int space_count = (rows - 1);
    int brick_count = 1;

    do
    {
        print_repeat(space_count, space);
        print_repeat(brick_count, brick);
        print_repeat(2, space);
        print_repeat(brick_count, brick);


        printf("\n");

        brick_count += 1;
        space_count -= 1;

    }
    while (space_count >= 0);


}

void print_repeat(int n, char c)
{
    for (int i = 0; i < n; i++)
    {

        printf("%c", c);
    }


}


