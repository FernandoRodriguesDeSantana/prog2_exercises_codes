#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    char title[30];
    char author[30];
    int pages;
} Book;

void bookParamters(Book *book, char *title, char *author, int pages);
int bubbleSortOrdenation(Book *book, int numberArraySize);

#endif // FUNCTIONS_H
