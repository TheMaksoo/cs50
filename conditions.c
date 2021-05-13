#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // promt user for x
    int x = get_int("x: ");

    // promt user for y
    int y = get_int("y: ");

    // compare x and y
    if ( x > y)
    {
        printf("X is greater than y\n");
    }
    else if ( x < y)
    {
        printf("X is less than y\n");
    }
    else
    {
        printf("X equal to y\n");
    }
}
