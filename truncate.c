#include <stdio.h>
#include <cs50.h>

int main(void)
{

    printf("\nType a number for x and y. for division\n");
    int x = get_int("x: ");
    int y = get_int("y: ");
    // converts int to float
    float z = (float) x / (float) y;

    printf("\n%i : %i = %f\n", x, y, z);

    // OR input = a float

    printf("\nType a number for x and y. for division\n");
    float a = get_float("x: ");
    float b = get_float("y: ");
    // converts int to float
    float c =  a /  b;

    printf("\n%f : %f = %f\n", a, b, c);
}