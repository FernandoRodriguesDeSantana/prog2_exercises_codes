#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
} Node;

typedef struct Stack{
    Node *top;
    int size;
} Stack;

void pop(Stack *stack, int number){
    Node *node = malloc(sizeof(Node));
    node -> value = number;
    node -> next = stack -> top;
    stack -> top = node;
}

Node *push(Stack *stack){
    Node *node = NULL;
    if(stack -> top){
        node = stack -> top;
        stack -> top = node -> next;
    }
    return node;
}

void printStack(Node *node){
    if(node){
        printf("\n%d", node -> value);
        printStack(node -> next);
    }

}

void isEmpty(Stack *stack){
    if(stack -> top == NULL){
        printf("\nTRUE");
    }else{
        printf("\nFALSE");
    }
}

int main(){
    Node *node;
    Stack stack;
    stack.top = NULL;
    stack.size = 0;
    int option, number = 0;

   do {
        printf("\n(1)Pop\n(2)Push\n(3)Is Empty\n(4)Print Stack\n(0)Leave\n\t>Option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nEnter a value: ");
                scanf("%d", &number);
                pop(&stack, number);
                break;
            case 2:
                push(&stack);
                break;
            case 3:
                isEmpty(&stack);
                break;
            case 4:
                printStack(stack.top);
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

