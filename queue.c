#include <stdio.h>
#include <stdlib.h>

// Store the queue node
struct node
{
    int data;
    struct node *next;
};

struct queue_struct
{
    struct node *head;
    struct node *tail;
};

// Build a new node
struct node* create_node(int data)
{
    // Insert a new element in the queue
    struct node* new_node = malloc(sizeof(struct(node)))
    {
        if(new_node == NULL)
        {
            printf("ERROR!");
            return 0;
        }
        // point the struct values to a pointer
        new_node -> data = data;
        new_node -> next = NULL;
        return new_node;
    };
};

void enqueue(struct *queue_void vqueue, int data)
{
    struct node *new_node = create_node(data);

    if(vqueue -> tail == NULL)
    {
        vqueue -> head = new_node;
        vqueue -> tail = new_node;
    } else{
        vqueue -> tail -> next = new_node;
        vqueue -> tail = new_node;
    }

//Build this code with  'type def struct'.
int main()
{
    printf("Hello world!\n");
    return 0;
}
