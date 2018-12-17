#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    string pokeballs[5];
    for (int i = 0; i < 5; i++)
        {
            printf("Give me a Pokemon: ");
            string pokemon = get_string();
            pokeballs[i] = pokemon;
        }
   int random = rand() % 5;
   printf("%s, I choose you!\n", pokeballs[random]);
   return 1;
}