#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ask the question
    string awnser = get_string("What's your name?\n");

    // awnser the question
    printf("Hello, %s\n", awnser);
}