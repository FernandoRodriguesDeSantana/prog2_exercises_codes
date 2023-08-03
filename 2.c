#include <stdio.h>
#include <stdlib.h>

void switch_value(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
};

int main(){
    int x = 10, y = 20; // I've two values; x = 10 and y = 20

    printf("Values before switch: x = %d and y = %d\n", x,y); // Here I print the original values
    switch_value(&x, &y); // With this function
    printf("\nValues after switch: x = %d and y = %d\n", x,y);
    return 0;
}
