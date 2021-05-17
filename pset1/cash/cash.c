#include <stdio.h>
#include <cs50.h>
#include <math.h>

float get_positive_int(void);

int main(void)
{

    // Ask for the amount paid


    float change = get_positive_int();
    change = round(change * 100);




    // coins
    // 25 10 5 1


    int coins = 0;

    // take 25 off
    do
    {

        if (change > 24)
        {
            change = change - 25;
            coins = coins + 1;
        }
    }
    while (change > 24);

    // take 10 off
    do
    {
        if (change > 9)
        {
            change = change - 10;
            coins = coins + 1;
        }
    }
    while (change > 9);

    // take 5 off
    do
    {
        if (change > 4)
        {
            change = change - 5;
            coins = coins + 1;
        }
    }
    while (change > 4);

    // take 1 off
    do
    {
        if (change > 0)
        {
            change = change - 1;
            coins = coins + 1;
        }
    }
    while (change > 0);

    printf("%i\n", coins);
}

float get_positive_int(void)
{
    float n;
    do
    {
        n = get_float("Change: ");
    }
    while (n < -0);
    return n;
}