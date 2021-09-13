//boiler plate
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //checks if argument is not equal to 2
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    //grabs text from user that they want to encrypt
    string plain = get_string("plaintext: ");
    int shift = atoi(argv[1]);

    //prints encrypted solution
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plain); i++)
    {
        if (!isalpha(plain[i]))
        {
            printf("%c", plain[i]);
        }
        else
        {
            //loops back to alphabets after z
            if (plain[i] > 'Z')
            {
                printf("%c", (plain[i] - 'a' + shift) % 26 + 'a');
            }
            else
            {
                printf("%c", (plain[i] - 'A' + shift) % 26 + 'A');
            }
        }
    }
    printf("\n");
}