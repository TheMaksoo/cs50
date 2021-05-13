#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree?\nType: y / n\n\n");

    // check if agreed or no agreed
    if (c == 'y' || c == 'Y')
    {
        printf("You agreed :D\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You didn't agree ;-;\n");
    }

}