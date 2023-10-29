#ifndef SYMPLYLINKEDLIST_H
#define SIMPLYLINKEDLIST_H

struct node
{
    int data;
    struct node *link;
};
void initializeNode(struct node *head, int data);
void countOfNodes(struct node *head);
void printDataNode(struct node *head);
void addAtEnd(struct node *head, int data);
void addAtBegin(struct node **head, int data);
struct node* removeFirstNode(struct node *head);

#endif // SYMPLYLINKEDLIST_H
