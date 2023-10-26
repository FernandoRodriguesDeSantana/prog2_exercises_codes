#ifndef SIMPLYLINKEDLIST_H
#define SIMPLYLINKEDLIST_H

typedef struct Node;
struct Node *createNode(int number);
void headInsertion(int number, struct Node **head);
void tailInsertion(int number, struct Node **head);
#endif // SIMPLYLINKEDLIST
