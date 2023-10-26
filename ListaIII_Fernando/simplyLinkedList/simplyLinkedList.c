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
    // CRIA UM NOVO NÓ E O INSERE NA POSIÇÃO 0 DA LISTA
    void headInsertion(int number, struct Node **head)
    {
        struct Node *newHeadNode = createNode(number); // CRIAÇÃO DO NOVO NÓ
        newHeadNode -> data = number; // A INFORMAÇÃO CONTIDA NO NOVO NÓ É PASSADA COMO PARÂMETRO DA FUNÇÃO
        newHeadNode -> next = *head; // O PONTEIRO, PERTECENTE AO NOVO NÓ, PARA O PRÓXIMO ELEMENTO APONTARÁ PARA A CABEÇA DO NÓ ATUAL
        *head = newHeadNode; // A CABEÇA SERÁ REPRESENTADA PELO NOVO NÓ
    }

    void tailInsertion(int number, struct Node **head) // A REFERÊNCIA PARA CHEGAR À CAUDA CONTINUA SENDO A CABEÇA
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
