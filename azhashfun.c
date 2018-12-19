// KUDOS to study.cs50.net for sending me down the right road.

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AZSIZE 27

// Write a hash function for strings that takes the mod26 (% 26) of the ASCII values of the argument key's first character.
// Don’t forget to take into account the size of your hash table!

int hash_function(char* key)
{
    int index = 0;
    index = key[0] % AZSIZE;
    return index;
}

int main(void)
{
    // get key
    printf("String: ");
    char* key = get_string();

    // calculate and print index
    printf("The string '%s' is mapped to index %i.\n", key,
    hash_function(key));

    return 0;
}