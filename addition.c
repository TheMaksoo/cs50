#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // 32 bit
    printf("\nType a number for x and y.\n");
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("\n%i + %i = %i\n", x, y, x + y);

    // 64 bit
    printf("\nType a big number for x and y.\n");
    long z = get_long("x: ");
    long q = get_long("y: ");

    printf("\n%li + %li = %li\n", z, q, z + q);
}