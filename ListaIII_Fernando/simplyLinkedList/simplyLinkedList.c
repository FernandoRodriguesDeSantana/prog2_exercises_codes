    #include "simplyLinkedList.h"
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct Node
    {
        int data;
        struct Node *next;
    } Node;

    Node *createNode(int number)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));
        if(newNode == NULL)
        {
            printf("\nERROR IN THE MEMORY ALLOCATION");
            return NULL;
        }

        //assigning a value to variable "value" and "next"
        newNode -> data = number;
        newNode -> next = NULL;
        return newNode;
    }
    // CRIA UM NOVO N� E O INSERE NA POSI��O 0 DA LISTA
    void headInsertion(int number, struct Node **head)
    {
        struct Node *newHeadNode = createNode(number); // CRIA��O DO NOVO N�
        newHeadNode -> data = number; // A INFORMA��O CONTIDA NO NOVO N� � PASSADA COMO PAR�METRO DA FUN��O
        newHeadNode -> next = *head; // O PONTEIRO, PERTECENTE AO NOVO N�, PARA O PR�XIMO ELEMENTO APONTAR� PARA A CABE�A DO N� ATUAL
        *head = newHeadNode; // A CABE�A SER� REPRESENTADA PELO NOVO N�
    }

    void tailInsertion(int number, struct Node **head) // A REFER�NCIA PARA CHEGAR � CAUDA CONTINUA SENDO A CABE�A
    {
        struct Node *newTailNode = createNode(number);

        if(*head == NULL)
        {
            *head = newTailNode;
        } else
        {
            Node *current = *head;
            while(current != NULL)
            {
                current = current -> next;
            }
            current -> next = newTailNode;
        }

    }
