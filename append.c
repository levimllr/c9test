#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
}
node;

node* head = NULL;

void append(int i)
{
    // build new node
    node* new = malloc(sizeof(node));

    // Make sure there's room for our new node in memory!
    // If malloc returns NULL, there's no room at the inn, so to speak.
    if (new == NULL)
    {
        exit(1);
    }

    // initialize new node
    new->n = i;
    new->next = NULL;

    // add new node to end of list
    node* prev = NULL;

    for (node* cur = head; cur != NULL; cur = cur->next)
    {
        prev = cur;
    }

    if (prev == NULL)
    {
        head = new;
    }
    else
    {
        prev->next = new;
    }
}

int main(int argc, char* argv[])
{
    // creating list
    printf("Appending ints 0-%i onto the list...\n", SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        append(i);
    }
    printf("done!\n");

    // printing out list
    printf("Your list contains ");
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");

    return 0;
}