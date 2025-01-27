#include <stdio.h>
#include <cs50.h>


int main(void)
{
    long user_input = get_long("CC#: ");
    long copy = user_input;
    string card_type = "INVALID";

    int count =  0;
    int odd_digits_sum = 0;
    int even_digits_sum = 0;
    while (user_input > 0)
    {
        int temp = user_input % 10;
        user_input = user_input / 10;
        count += 1;
        if (count % 2 != 0)
        {
            odd_digits_sum += temp;

        }
        else
        {

            temp = (temp * 2);

            if (temp >= 10)
            {
                int remainder = temp % 10;

                even_digits_sum += (remainder + 1);
            }
            else
            {
                even_digits_sum += temp;
            }
        }

    }
    while (copy > 100)
    {
        copy = copy / 10;
    }

    int total = (even_digits_sum + odd_digits_sum);
    if (total % 10 == 0)
    {
        if ((copy == 34 || copy == 37) && count == 15)
        {
            card_type = "AMEX";
        }
        else if ((copy >= 51 && copy <= 55) && count == 16)
        {
            card_type = "MASTERCARD";
        }
       else
        {
            copy = copy / 10;

            if (copy == 4 && (count == 13 || count == 16))
            {
                card_type = "VISA";
            }

        }

    }


    printf("%s\n", card_type);
}



