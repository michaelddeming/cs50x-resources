#include <stdio.h>


int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // Print average
    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
}

// ---

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
}


// ---

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int N = 3
    int scores[N];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", (score1 + score2 + score3) / (float) N);
}

// ---

#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int length, int array[]);

int main(void)
{

    int scores[N];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores));
    
}

float average(int length, int array[])
{
    // Calculate average

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        summ += array[i];
    }
    return sum / (float) length;
}
