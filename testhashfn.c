// KUDOS to study.cs50.net!

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Write a hash function for strings that sums the ASCII values of the argument key's characters.
// Don’t forget to take into account the size of your hash table!

int hash_function(char* key, int size)
{
    int index;
    int sum = 0;
    for (int i = 0; i < strlen(key); i++)
    {
        int aval = key[i];
        sum += aval;
    }
    index = sum % size;
    return index;
}

int main(void)
{
    // get hash table size
    printf("Hash table size: ");
    int size = get_int();

    // get key
    printf("Key: ");
    char* key = get_string();

    // calculate and print index
    printf("The string '%s' is mapped to index %i\n", key,
    hash_function(key, size));

    return 0;
}