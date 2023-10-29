#include "simplyLinkedListFernando.h"
#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
/*
void initializeNode(struct node *head, int data)
{

    head = (struct node*)malloc(sizeof(struct node)); // MALLOC RETURN'S A VOID POINTER

    head -> data = data;
    head -> link = NULL; // DON'T HAVE ANOTHER NODE AFTER
    // THE STRUCT NODE STARTS WITH A NULL POINTER VALUE. THIS STRUCT (HEAD) BEGINS TO
    // POINT TO A NEW NODE WITH DATA = 15. AS THIS NEW NODE IS THE LAST IN THE LIST, IT POINTS TO NULL
}
*/
void addAtBegin(struct node **head, int data)
{
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current -> data = data;
    current -> link = NULL;
    (*head) -> link = current;
    // THE NEW NODE CALLED CURRENT HAS VALUE 52 AND POINTS TO NULL AS IT IS LAST ON THE LIST. NOW THE HEAD NODE POINTS TO THE CURRENT NODE
    /*
    current = malloc(sizeof(struct node)); // WE CAN REUSE THE CURRENT POINTER BECAUSE IT POINTS TO THE CURRENTLY CREATED NODE.
    current -> data = data;
    current -> link = NULL;
    head -> link -> link = current; // WITH THIS LINE OF CODE IT CAN BE SAID THAT THE SECOND NODE'S LINK IS POINTING TO THE CURRENT NODE (IE THE THIRD NODE)
    */
}

void addAtEnd(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp -> data = data;
    temp -> link = NULL;

    while((ptr -> link) != NULL)
    {
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}

void countOfNodes(struct node *head)
{
    int count = 0;
    if(head == NULL)
        printf("\nLinked list is empty");
    struct node *ptr = NULL; // INITIALIZE THE NODE POINTING TO A NULL VALUE
    ptr = head; // PTR GETS THE FIRST NODE ADRESS
    while(ptr != NULL)
    {
        count++;
        ptr = ptr -> link; // PTR GETS THE NEXT NODE ADRESS
    }
    printf("\n%d", count);
}

void printDataNode(struct node *head)
{
    if(head == NULL)
        printf("\nLinked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(FALSE)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
}

struct node* removeFirstNode(struct node *head)
{
    if(head == NULL)
    {
        printf("\nList is already empty!");
    }
    else
    {
        struct node *temp = head;
        head = head -> link;
        free(temp);
        temp = NULL;
    }
    return head;
};

