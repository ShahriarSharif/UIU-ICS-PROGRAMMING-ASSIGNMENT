#include<stdio.h>

int main() {
    int X, Y, multiplication, division;
    scanf("%d %d", &X, &Y);

    multiplication = X;
    multiplication *= Y;

    division = X;
    division /= Y;

    printf("Incremented Value: %d \n", multiplication);
    printf("Decremented Value: %d \n", division);

    return 0;
}
