#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asks how high
    int n;
    do
    {
        n = get_int("Positive Number: ");
    }
    while (n < 1 || n > 8);

    // makes the rows

    for (int i = 0; i < n; i++)
    {
        // adds the spaces
        for (int h = n - 1 ; h > i; h--)
        {
            printf(" ");
        }
        // adds the "Blocks"
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


