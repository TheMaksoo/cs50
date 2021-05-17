#include <stdio.h>
#include <cs50.h>
void printCard(long ccn);
bool checkcard(long creditCardNumber);
int numberLength(long n);
bool checksum(long ccn);

int main(void)
{
    //todo: promt input
    long creditCardNumber;
    do
    {
        creditCardNumber = get_long("Credit card number:");
    }
    while (creditCardNumber < 0);


    if (checkcard(creditCardNumber))
    {
        printCard(creditCardNumber);
    }
    else
    {
        printf("INVALID\n");
    }


}

// check card
bool checkcard(long creditCardNumber)
{

    int len = numberLength(creditCardNumber);
    return (len == 13 || len == 15 || len == 16) && checksum(creditCardNumber);
}

// Check number length for checksum
int numberLength(long n)
{
    int len;
    for (len = 0; n != 0; n /= 10, len++);
    return len;
}

// todo caculate checksum
bool checksum(long ccn)
{
    int sum = 0;

    for (int i = 0; ccn != 0; i++, ccn /= 10)
    {
        if (i % 2 == 0)
        {
            sum += ccn % 10;
        }
        else
        {
            int digit = 2 * (ccn % 10);
            sum += digit / 10 + digit % 10;
        }
    }
    return (sum % 10) == 0;
}

// find what card it is
void printCard(long ccn)
{

    // checks if amex numbers start
    if ((ccn >= 34e13 && ccn < 37e13) || (ccn >= 37e13 && ccn < 38e13))
    {
        printf("AMEX\n");
    }
    // check is mastercard numbers start
    else if (ccn >= 51e14 && ccn < 56e14)
    {
        printf("MASTERCARD\n");
    }
    // check if visa numbers start
    else if ((ccn >= 4e12 && ccn < 5e12) || (ccn >= 4e15 && ccn < 5e15))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
