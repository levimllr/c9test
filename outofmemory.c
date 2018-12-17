#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* ptr;
    int count = 0;
    while (malloc(1) != NULL)
    {
        count++;
    }
    printf("malloc(1) was successful %i times.", count);
}