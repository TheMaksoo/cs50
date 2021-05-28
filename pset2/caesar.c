#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{


    // check there is only 1 arguments and it is a number
    if (argc == 2 && isdigit(*argv[1]))

    {

        int a = atoi(argv[1]); // get key uwu

        string s = get_string("plaintext: ");
        printf("ciphertext: ");

        // check letter by letter
        for (int i = 0, n = strlen(s) ; i < n; i++)
        {
            // checking if it is lowercase 97 = a or if its lowercase 112 = z and if it + 13 characters along.
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') + a) % 26) + 'a');
            } // if it it between uppercase A and C (same as a and c above)
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + a) % 26) + 'A');
            }

            else

            {
                printf("%c", s[i]);
            }
        }

        printf("\n");
        return 0;
    }

    else
    {
        printf("Usage: ./caesar key number\n");
        return 1;

    }

}