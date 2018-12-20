#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float changeowed = get_float("Change owed: ");
    int change = changeowed * 100;
    int quarters = change / 25;
    int dimes = (change - quarters * 25)/10;
    int nickels = (change - quarters * 25 - dimes * 10)/5;
    int pennies = (change - quarters * 25 - dimes * 10 - nickels * 5)/1;
    int number = quarters + dimes + nickels + pennies;
    printf("%i\n", number);
}