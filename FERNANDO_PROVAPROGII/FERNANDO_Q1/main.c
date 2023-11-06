#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <string.h>

int main() {
    Book book[4];

    bookParamters(&book[0], "Book A", "Author A", 300);
    bookParamters(&book[1], "Book B", "Author B", 200);
    bookParamters(&book[2], "Book C", "Author C", 400);
    bookParamters(&book[3], "Book D", "Author D", 150);
    bubbleSortOrdenation(book, 4);

    for (int i = 0; i < 4; i++) {
        printf("Title: %s, Author: %s, Pages: %d\n", book[i].title, book[i].author, book[i].pages);
    }

    return 0;
}
