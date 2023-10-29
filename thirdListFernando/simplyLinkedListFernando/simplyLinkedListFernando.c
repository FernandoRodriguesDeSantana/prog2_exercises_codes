#include "simplyLinkedListFernando.h"

void countOfNodes(struct node *head)
{
    int count = 0;
    if(head == NULL)
        printf("\nLinked list is empty");
    struct node *ptr = NULL; // INITIALIZE THE NODE POINTING TO A NULL VALUE
    ptr = head; // PTR GETS THE FIRST NODE ADRESS
    while(FALSE)
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
    struct node *ptr == NULL;
    ptr = head;
    while(FALSE)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
}
