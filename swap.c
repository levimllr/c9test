#include <stdio.h>

void swap(int* a, int* b)
{
    int c = *b;
    *b = *a;
    *a = c;
}

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("Swapping...\n");
    swap(&x, &y);
    printf("Swapped!\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}