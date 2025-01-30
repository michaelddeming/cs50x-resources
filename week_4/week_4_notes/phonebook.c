#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a"); //open file phonebook.csv in append mode (add new info)
    if (file == NULL)
    {
        return 1;
    }

    char* name = get_string("Name: ");
    char* number = get_string("Number: ");

    fprint(file, "%s,%s\n", name, number);

}