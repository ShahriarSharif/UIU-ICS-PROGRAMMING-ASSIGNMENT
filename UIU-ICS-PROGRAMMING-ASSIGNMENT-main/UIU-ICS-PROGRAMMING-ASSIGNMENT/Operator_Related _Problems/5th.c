#include<stdio.h>

int main() {
    int X, Y, incree, decree;
    scanf("%d %d", &X, &Y);

    incree = X;
    incree += Y;

    decree = X;
    decree -= Y;

    printf("Incremented Value: %d \n", incree);
    printf("Decremented Value: %d \n", decree);

    return 0;
}
