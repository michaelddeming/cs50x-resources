#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int get_score(string word);
int main(void)
{
    string p1_input = get_string("Player 1: ");
    string p2_input = get_string("Player 2: ");



    int p1_score = get_score(p1_input);
    int p2_score = get_score(p2_input);

    if (p1_score > p2_score)
    {
        printf("Player 1 wins!\n");
    }
    else if (p1_score < p2_score)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int get_score(string word)
{
    int scores[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    // index = char - 65

    int score = 0;
    for (int i = 0; strlen(word) > i; i++)
    {
        char current_char = word[i];
        if (isalpha(current_char))
        {
             if (current_char <= 122 && current_char >= 97)
        {
            current_char -= 32;

        }
            int index = current_char - 65;
            score += scores[index];
        }

    }


    return score;

}


