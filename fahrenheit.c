#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float C = get_float("C: ");
    float F = ((C * 9) / 5) + 32;
    printf("F: %f\n", F);
}