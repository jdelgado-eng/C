/*  */

#include <stdio.h>
#include <cs50.h>


const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;


int calculate_coins(int change, int coin_value);


int main(void)
{
    // Prompt the user for change owed, in cents
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 1);

    /*
    // Calculate how many quarters you should give customer
    int qCoins = calculate_quarters(change);

    // Subtract the value of those quarters from cents
    change -= (qCoins * 25);
    */


    int q = calculate_coins(change, QUARTER);
    change -= q * QUARTER;

    int d = calculate_coins(change, DIME);
    change -= d * DIME;

    int n = calculate_coins(change, NICKEL);
    change -= n * NICKEL;

    int p = calculate_coins(change, PENNY);
    change -= p * PENNY;

    printf("%i\n", q + d + n + p);

}


int calculate_coins(int change, int coin_value)
{
    return change / coin_value;
}


/*
int calculate_quarters(int qchange)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (qchange >= 25)
    {
        quarters++;
        qchange -= 25;
    }
    return quarters;
}

int calculate_dime(int dchange)
{
    return dchange/10;
}

int calculate_nickel(int nchange)
{

    return nchange/5;
}
*/
