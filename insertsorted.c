// This code has been extensively commented for the benefit of the writer-learner. Proceed at your own hazard!

// .c files (that is, instructions in the C language, or source code) begin with #include. #include is what's called a preprocessor directive.
// #include tells the preprocessor, a program that processes the source code before compilations, to insert the contents of another file into the source code.
// .h files are known as header files. Header files contain declarations and definitions that can be shared across source files (vis a vis #include).
// Header files are part of things known as libraries. Libraries in general are groups of functions and declarations which can be used by other programs.
// Libaries are composed of two files, a .h (or header) and a .c (or implementation).
// stdio.h (stANDARd BUFFERED iNPUT oUTPUT) is a header file which provides functions for file input and output, including printf() and scanf().
// stdlib.h (stANDARd libRARY) provides header information for memory allocation and freeing functions, such as malloc() and free().
#include <stdio.h>
#include <stdlib.h>

// Definitions need not be limited to header files. #define, like all words that begin with #, is a (preprocessor) directive which modifies the source code before compilation.
// #define does just that; it allows us to define a constant which can be used and understood however deep code gets nested in our program! Constants cannot be modified.
// In this particular program, we define a constant SIZE to be 5. One style conventions is to CAPITALIZE CONSTANTS.
#define SIZE 5

// Having listed our directives for the preprocessor, we can now concern ourselves with the task at hand:
// This function inserts a node containing an integer int i into the appropriate position in a list sorted in ascending order.

// For starters, we define a data type using typedef and struct.
// A struct, or structure, is a user-defined data type that allows the user to combine different kinds of data items (int, floats, chars, and so forth).
// A struct is filled with member definitions. In this particular struct, we define int n and a self-referential pointer next.
// typedef allows us to call our struct "node". "node" in this case is a self-referential data type, as it refers to itself.
// "node" contains an integer value called "n", and a pointer to the next node in a singly-linked list called "next".
typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
}
node;

// The first step to creating our singly-linked list (henceforth known as SLL) is to create a pointer to a node called head and set its value to NULL.
// head serves as the first node in our SLL. We establish its address as NULL so as to create a condition which allows us to create first and subsequent nodes.
node* head = NULL;

// What follows is a function insert_sorted that inserts a node containing an integer i into the appropriate position in a list sorted in ascending order.
// Functions in general are given in the form, "return_type function_name(parameter list){body of the function}".
// For our insert_sorted function, the return_type is void, as we need it to simply do something, not return anything.
// As per the function form convention, the name of this function is insert_sorted, and it uses but one parameter, an integer i which is initialized in the declaration.
void insert_sorted(int i)
{
    // Before we do anything, we need to make a new node for the integer about to be inserted. We do this by first setting aside memory for the node using malloc().
    // malloc() (or mEMORY allocATION) is a function included with stlib.h that allocates a bytes-sized memory block and returns a pointer to the block's beginning.
    // We determine the size of malloc we need by using the sizeof() operator, which returns the number of bytes requires to store a particular data type.
    // In the following line, we create a node pointer called new and set aside space for it.
    node* new = malloc(sizeof(node));

    // A good practice is to stop to check that there is actually space for our pointer in memory. If its address is NULL, there's no room at the inn, so to speak.
    if (new == NULL)
    {
        exit(1);
    }

    // With our new node, we set its value to the parameter inputted to insert_sorted.
    // -> notation means that we access follow the pointer new to its struct, or data type.
    // What is to the right of -> is the data type within the structure that we are accessing. In this case it's the int n.
    // The following lines set the value of the integer contained within the struct pointed to by new to i, and we set the pointer to the next node to NULL.
    new->n = i;
    new->next = NULL;

    // So we have a newly-minted node. Now what? We need to insert it and sort the linked list of which it's become a part!
    // We will find where to put our node by crawling over the SLL with two pointers: prev(ious) and cur(rent).
    // Since we're sorting values in ascending order, we'll break the for loop if we find a value larger than i.
    // In the following for loop, we create a pointer to the head node called cur and will be incrementing it by referring to the pointer of the next node...
    // ... until there is no next node and the pointer returns NULL.
    node* prev = NULL;
    for (node* cur = head; cur != NULL; cur = cur->next)
    {
        // This if conditional statement provides for when the integer in n is greater than i! We break out of the for loop in that case.
        if (cur->n > i)
        {
            break;
        }
        // If the integer stored at the address pointed to by cur is not greater than i, we set the prev node equal to the cur node before incrementing cur.
        // We maintain prev as a comparative reference for when the for loop breaks.
        else
        {

        }
    }

    // We'll know where to place our node based on the values of prev and cur.
    // If prev is NULL, there is no prev and the node belongs at the head of the list.
    if (prev == NULL)
    {


    }
    // else insert in middle or end
    else
    {


    }
}

int main(int argc, char* argv[])
{
    printf("Inserting %i random ints to the list...\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        insert_sorted(rand() % SIZE);
    }
    printf("done!\n");

    // printing out list
    printf("Your list now contains ");
    for (node* ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");

    return 0;
}