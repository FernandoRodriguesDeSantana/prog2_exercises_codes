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


//======================================================================================================================================
#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void buildNodeAtBegin(struct node **head, int number) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode) {
        newNode->data = number;
        newNode->next = *head;
        *head = newNode;
    } else {
        printf("\nERROR!");
    }
}

void buildNodeAtEnd(struct node **head, int number) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode) {
        newNode->data = number;
        newNode->next = NULL;

        if (*head == NULL) {
            *head = newNode;
        } else {
            node *aux = *head;
            while (aux->next)
                aux = aux->next;
            aux->next = newNode;
        }
    } else {
        printf("\nERROR!");
    }
}

void buildNodeAtMiddle(struct node **head, int number, int beforeNumber) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode) {
        newNode->data = number;
        if (*head == NULL) {
            newNode->next = NULL;
            *head = newNode;
        } else {
            node *aux = *head;
            while (aux->data != beforeNumber && aux->next)
                aux = aux->next;
            newNode->next = aux->next;
            aux->next = newNode;
        }
    } else {
        printf("\nERROR!");
    }
}

void printList(struct node *head) {
    printf("\nList: ");
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n\n");
}

int main() {
    int option, number, reference = 0;
    node *head = NULL;

    do {
        printf("\n(1)Insert at begin\n(2)Insert at end\n(3)Insert at middle\n(4)Print list\n(0)Leave\n\t>Option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter a value: ");
                scanf("%d", &number);
                buildNodeAtBegin(&head, number);
                break;
            case 2:
                printf("\nEnter a value: ");
                scanf("%d", &number);
                buildNodeAtEnd(&head, number);
                break;
            case 3:
                printf("\nEnter a value and the predecessor element: ");
                scanf("%d%d", &number, &reference);
                buildNodeAtMiddle(&head, number, reference);
                break;
            case 4:
                printList(head);
                break;
            default:
                if (option != 0)
                    printf("\nWrong option!");
                else
                    printf("\nLeaving...");
        }
    } while (option != 0);

    return 0;
}
