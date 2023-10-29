#include <stdio.h>
#include <stdlib.h>
#include "simplyLinkedListFernando.h"

int main()
{
    int data;
    struct node *head = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 4;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 52;
    current->link = NULL;
    head->link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    return 0;
}
