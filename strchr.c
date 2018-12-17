#include <cs50.h>
#include <stdio.h>
#include <string.h>

char* my_strchr(char* str, char c)
{
    for (char* ptr = str; *ptr != '\0'; ptr++)
    {
        if (*ptr == c)
        {
            return ptr;
        }
    }
    return NULL;
}

int main(void)
{
    printf("String: ");
    char* str = get_string();
    printf("Character: ");
    char c = get_char();
    printf("Looking for substring...\n");
    char* result = my_strchr(str, c);
    if (result == NULL)
    {
        printf("Couldn't find %c.\n", c);
    }
    else
    {
        printf("Substring: %s \n", result);
    }
}