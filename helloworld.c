#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string awnser = get_string("What's your name?\n");
    printf("Hello, %s", awnser);
    string awnser2 = get_string("\nHow old are you?\n");
    printf("woah only, %s", awnser2);
}

//to compile type "Make [FILENAME]"
//to run the type "./[FILENAME]"