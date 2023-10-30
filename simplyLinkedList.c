#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *link;
} Node;

void addAtBegin(struct Node **list, int data)
{
    Node *newNode = malloc(sizeof(Node));

    if(newNode)
    {
        newNode -> data = data;     // New node gets a new value
        newNode -> link = *list;    // New node points to the old first element
        *list = newNode;            // The new first element is the newNode
        // *(list) == list content
    }
    else
    {
        printf("\nERROR!");
    }

}

void addAtEnd(struct Node **list, int data)
{
    Node *newNode, *aux = malloc(sizeof(Node));
    if(newNode)
    {
        newNode -> data = data;     // Creating a new node and assigning the data value
        newNode -> link = NULL;     // The last node link is NULL

        if(*list == NULL)           // IF the list is already to empty
        {
            *list = newNode;        // The list initialize with the newNode
        }
        else
        {
            aux = *list;
            while(aux -> link)
            {
                aux = aux -> link;
            }
            aux -> link = newNode;
        }
    }
    else
    {
        printf("\nERROR!");
    }
}

void printList(struct Node *node)
{
    printf("\n\tList: ");
    while(node)
    {
        printf("%d ", node -> data);
        node = node -> link;        // Jump to the next node
    }
    printf("\n\n");
}

Node *removeNode(struct Node **list, int data) {
    Node *aux, *removedNode = NULL;

    if (*list) {
        if ((*list)->data == data) {
            removedNode = *list;
            *list = (*list)->link;
        } else {
            aux = *list;
            while (aux->link && aux->link->data != data) {
                aux = aux->link;
            }
            if (aux->link) {
                removedNode = aux->link;
                aux->link = removedNode->link;
            }
        }
    }
    return removedNode;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
