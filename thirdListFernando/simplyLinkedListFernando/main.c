#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL; // INITIALIZE THE NODE POINTING TO A NULL VALUE

    head = (struct node*)malloc(sizeof(struct node)); // MALLOC RETURN'S A VOID POINTER
    head -> data = 15;
    head -> link = NULL; // DON'T HAVE ANOTHER NODE AFTER
    // THE STRUCT NODE STARTS WITH A NULL POINTER VALUE. THIS STRUCT (HEAD) BEGINS TO
    // POINT TO A NEW NODE WITH DATA = 15. AS THIS NEW NODE IS THE LAST IN THE LIST, IT POINTS TO NULL

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current -> data = 52;
    current -> link = NULL;
    head -> link = current;
    // THE NEW NODE CALLED CURRENT HAS VALUE 52 AND POINTS TO NULL AS IT IS LAST ON THE LIST. NOW THE HEAD NODE POINTS TO THE CURRENT NODE

    current = malloc(sizeof(struct node)); // WE CAN REUSE THE CURRENT POINTER BECAUSE IT POINTS TO THE CURRENTLY CREATED NODE.
    current -> data = 3;
    current -> link = NULL;
    head -> link -> link = current; // WITH THIS LINE OF CODE IT CAN BE SAID THAT THE SECOND NODE'S LINK IS POINTING TO THE CURRENT NODE (IE THE THIRD NODE)
}
