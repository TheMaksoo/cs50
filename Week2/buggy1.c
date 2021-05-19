#include <cs50.h>
#include <stdio.h>

// prototype of function
int get_negative_int(void);

int main(void)
{
    // get negative number from user
    int i = get_negative_int();
    printf("%i\n", i);
}

// negative integer function
int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Number: ");
    }
    while (n < 0);
    return n;
}