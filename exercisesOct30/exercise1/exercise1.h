#ifndef EXERCISE_1
#define EXERCISE_1

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void addNode(struct Node **nodeList, int data);

#endif // EXERCISE_1
