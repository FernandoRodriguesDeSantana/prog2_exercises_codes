#include "exercise1.h"

void addNode(struct Node **nodeList, int data)
{
    Node *newNode = malloc(sizeof(Node));

    if(newMode) // iF the memory allocation is right
    {
        newNode -> data = data;
        newNode -> next = *nodeList; // the new node points to the same address as the *nodeList, that is, to the address of the first element of the list
        *nodeList = newNode;    // the pointer *nodeList points to the newNode address
    }
    else
    {
        printf("\nERROR!");
    }
}
