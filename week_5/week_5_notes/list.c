#include <stdio.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    // same as int list[3]

    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int));
    if (temp == NULL)
    {
        free(list)
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i]
    }

    tmp[3] = 4;

    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list)
    return 0;
}

// -------------------------------------------------

#include <stdio.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    // same as int list[3]

    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));
    if (temp == NULL)
    {
        free(list)
        return 1;
    }

    tmp[3] = 4;

    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list)
    return 0;
}

// -------------------------------------------------

#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
   node *list = NULL;

   for (int i = 0; i < 3; i++)
   {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        (*n).number = get_int("Number: ");
        (*n).next = list;

        list = n;
   }

    // Time passes

    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", (ptr*).number)
        ptr = (*ptr).next;

    }
}

// -------------------------------------------------

#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
   node *list = NULL;

   for (int i = 0; i < 3; i++)
   {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        (*n).number = get_int("Number: ");
        (*n).next = list;
        
        // if list is empty
        if (list == NULL)
        {
            list = n;
        }
        else
        {
            for (node *ptr = list; ptr != NULL; (ptr*).next)
            {
                if ((ptr*).next == NULL)
                {
                    (ptr*).next = n;
                    break;
                }
            }
        }
   }

    // Time passes

    for (node *prt = list; ptr != NULL; (ptr*).next)
    {
        printf("%i\n", (ptr*).number);


        // Time passes

        node *ptr = list;
        while (ptr != NULL)
        {
            node *next = (ptr*).next;
            free(ptr);
            ptr = next;

        }
        return 0;
    }
}