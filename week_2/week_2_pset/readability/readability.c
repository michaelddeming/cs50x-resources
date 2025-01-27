#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int eval_string(string str);
int main(void)
{
    string user_input = get_string("Text: ");
    int grade_level = eval_string(user_input);
    if (grade_level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade_level >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade_level);
    }

}
int eval_string(string str)
{
    int sentences = 0;
    int words = 0;
    int letters = 0;
    for (int i = 0; strlen(str) > i; i++)
    {
        char current_char = str[i];
        if (current_char == ' ')
        {
            words += 1;
        }
        else if (current_char == '.' || current_char == '!' || current_char == '?')
        {
            sentences += 1;
        }
        else if (isalpha(current_char))
        {
            letters += 1;
        }
    }
    words++;
    float L = ((float) letters /  words) * 100.0;
    float S = ((float) sentences / words) * 100.0;
    float grade = (0.0588 * L) - (0.296 * S) - 15.8;
    grade = round(grade);
    return grade;

}
