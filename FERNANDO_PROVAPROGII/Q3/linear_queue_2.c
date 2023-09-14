#include "linear_queue_2.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Node *buildNode(int value)
{
    //allocating memory
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("\nERROR IN THE MEMORY ALLOCATION");
        return NULL;
    }

    //assigning a value to variable "value" and "next"
    newNode -> value = value;
    newNode -> next = NULL;
    return newNode;
}

void enqueuee(Queuee *queuee, int value)
{
    Node *newNode = buildNode(value);

    if(queuee -> tail == NULL)
    {
        queuee -> head = newNode;
        queuee -> tail = newNode;
    } else
    {
        queuee -> tail -> next = newNode;
        queuee -> tail = newNode;
    }
}

void printQueuee(Queuee *queuee)
{
    // start at the first position
    Node *actual = queuee -> head;
    while(actual != NULL)
    {
        float time = 0;
        printf("%d ", actual -> value);
        // start position ++
        actual = actual -> next;
    }
    printf("\n");
}


int desenqueuee(Queuee *queuee)
{ if(queuee -> head == NULL)
    {
        return 1;
    } else
    {
        Node *actual = queuee -> head;
        queuee -> head = queuee -> head -> next;
        free(actual);
    }
}

void printFirstQueuee(Queuee *queuee)
{
    Node *actual = queuee -> head;
    printf("%d ", actual -> value);
}

float calculateAverageTime(Queuee *queuee, float time)
{
    Node *newNode = buildNode(time);
    int count = 0;
    if(queuee -> tail == NULL)
    {
        queuee -> head = newNode;
        queuee -> tail = newNode;
        time++;
        count++;
    } else
    {
        queuee -> tail -> next = newNode;
        queuee -> tail = newNode;
        time++;
        count++;
    }
    return time/count;
}

