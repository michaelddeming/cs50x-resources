#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int coins = 0;
    int change;

    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);



    int max_quarters = change / quarter;
    change = change - (max_quarters * quarter);

    int max_dimes = change / dime;
    change = change - (max_dimes * dime);

    int max_nickels = change / nickel;
    change = change - (max_nickels * nickel);

    int max_pennies = change / penny;
    change = change - (max_pennies * penny);

    coins =(max_quarters + max_dimes + max_nickels + max_pennies);

    printf("%i\n", coins);

}

