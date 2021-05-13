#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Type a number for x and y.\n");
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("\n%i + %i = %i\n", x, y, x + y);
}