#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n"); //print manual
        return 1;
    }

    int argv_length = strlen(argv[1]); //get length
    if (argv_length != 26)      //check if 26 letters
    {
        printf("Key must be up to 26\n"); //eror if not 26
        return 1;
    }
    for (int i = 0; i < argv_length; i++) // go over every letter
    {
        if (!isalpha(argv[1][i]))   //check if its not a aplhabet
        {
            printf("All Key must be an Alphabeth\n");
            return 1;
        }
        for (int j = i + 1; j < argv_length; j++) // check if doubble aplhabet
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Key must not contain repeated alphabeth");
                return 1;
            }
        }
    }
    string plaintext = get_string("plaintext: ");   //Getting user input as plaintext
    printf("ciphertext: ");
    int plaintext_length = strlen(plaintext);
    for (int i = 0; i < plaintext_length; i++)
    {
        if (isupper(plaintext[i]))                  //check if plaintext character is uppercase
        {
            printf("%c", toupper(argv[1][plaintext[i] - 65]));  //print the encipher text Uppercase
        }
        else if (islower(plaintext[i]))  //check if plaintext character is lowercase
        {
            printf("%c", tolower(argv[1][plaintext[i] - 97]));  ///print the encipher text lowercase
        }
        else
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");
}