#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Converts a string given by the user to lower case!
int main(void)
{
    string word = get_string("String: ");
    char lower[strlen(word)+1];
    for (int i = 0; i < strlen(word); i++)
    {
        lower[i] = tolower(word[i]);
    }
    lower[strlen(word)] = '\0';

    printf("%s\n", lower);
}