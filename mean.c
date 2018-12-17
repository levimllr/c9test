#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int integers[5];
    float sum = 0;
    for (int i = 0; i < 5; i++)
        {
            printf("Give me an integer: ");
            int integer = get_int();
            integers[i] = integer;
            sum += integer;
        }
   float mean = sum / 5.0;
   printf("Average: %f\n", mean);
   return 1;
}