#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <string.h>

void bookParamters(Book *book, char *title, char *author, int pages) {
    strcpy(book->title, title);
    strcpy(book->author, author);
    book->pages = pages;
}

int bubbleSortOrdenation(Book *book, int numberArraySize) {
    int helperOperator = 0, flag = 1;

    while (flag) {
        flag = 0;

        for (int i = 0; i < numberArraySize - 1; i++) {
            if (book[i].pages > book[i + 1].pages) {
                flag = 1;   // If the condition is TRUE, set the flag to 1. This flag is used for signaling when numbers have been switched.
                helperOperator = book[i + 1].pages;
                book[i + 1].pages = book[i].pages;
                book[i].pages = helperOperator;
            }
        }
    }

    return 0;
}
