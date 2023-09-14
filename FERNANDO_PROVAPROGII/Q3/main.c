#include <stdio.h>
#include <stdlib.h>
#include "linear_queue_2.h"

int main()
{
    Queuee queuee;
    queuee.head = 0;
    queuee.tail = 0;
    queuee.time = 5;
    int option = 0;

    do
    {
        printf("What do you want to do?\n   >(0)List\n   >(1)Enqueue a element\n   >(2)Return First Element\n   >(3)Remove a element\n   >(4)Time average\n   >(5)Exit\n   >()");
        scanf("%d", &option);

        switch(option)
    {
        int element = 0;
        case 0:
            printf("\nPrinting queue elements...");
            printQueuee(&queuee);
            break;

        case 1:

            printf("\nEnter the element: ");
            scanf("%d", &element);
            enqueuee(&queuee, element);
            printf("\nAdded element...");

            break;

        case 2:
            printf("\nPrinting the first element...");
            printFirstQueuee(&queuee);
            break;

        case 3:
            printf("\nDefiling the first element...");
            desenqueuee(&queuee);
            break;
        case 4:
            printf("\nPrinting the time average...");
            calculateAverageTime(&queuee, time);
            break;

        default:
            printf("\nExiting...");
    }
    } while(option != 4);

    return 0;
}
