#include <stdio.h>
#include <stdlib.h>

int increase(int x, int a){
    int sum = a + x;
    return sum;
};

int main()
{
    int x = 0, a = 0, value = 0, i = 0;
    do{
        printf("\nEnter a number: ");
        scanf("%d", &x);
        value = increase(x,a);
        printf("\nThe sum between %d and %d is %d", a, x, value);
        a = value;
        printf("\nDo you want sum again? (0) Yes, (1) No:\n");
        scanf("%d", &i);
    } while(i != 1);

    return 0;
}
