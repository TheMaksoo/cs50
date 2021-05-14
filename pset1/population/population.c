#include <cs50.h>
#include <stdio.h>

int get_starting_size(void);
int get_ending_size(void);

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("How big is the current lama population?\n");

        if (start_size < 9)
        {
            printf("It should be bigger than or equal to 9\n");
        }
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("How big is the ending lama population?\n");

        if (end_size < start_size)
        {
            printf("It can't be smaller then the current population\n");
        }
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i", years);
}