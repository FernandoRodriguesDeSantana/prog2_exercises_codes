#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node {
    char data[100];
    struct node *next;
} node;

void buildNodeAtBegin(struct node **head, char *value) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode) {
        strcpy(newNode->data, value);
        newNode->next = *head;
        *head = newNode;
    } else {
        printf("\nERROR!");
    }
}

void buildNodeAtEnd(struct node **head, char *value) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode) {
        strcpy(newNode->data, value);
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

void buildNodeAtMiddle(struct node **head, char *value, char *beforeValue) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode) {
        strcpy(newNode->data, value);
        if (*head == NULL) {
            newNode->next = NULL;
            *head = newNode;
        } else {
            node *aux = *head;
            while (aux && strcmp(aux->data, beforeValue) != 0)
                aux = aux->next;

            if (aux != NULL) {
                newNode->next = aux->next;
                aux->next = newNode;
            } else {
                printf("\nERROR!");
                free(newNode);
            }
        }
    } else {
        printf("\nERROR!");
    }
}

void printList(struct node *head) {
    printf("\nList: ");
    while (head) {
        printf("%s ", head->data);
        head = head->next;
    }
    printf("\n\n");
}

int main() {
    int option;
    char value[100];
    char reference[100];
    node *head = NULL;

    do {
        printf("\n(1)Insert at begin\n(2)Insert at end\n(3)Insert at middle\n(4)Print list\n(0)Leave\n\t>Option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter a value: ");
                scanf("%s", value);
                buildNodeAtBegin(&head, value);
                break;
            case 2:
                printf("\nEnter a value: ");
                scanf("%s", value);
                buildNodeAtEnd(&head, value);
                break;
            case 3:
                printf("\nEnter a value and the predecessor element: ");
                scanf("%s%s", value, reference);
                buildNodeAtMiddle(&head, value, reference);
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
