#include<stdio.h>

int main() {
    int X, assign_to_y;
    float Y, assign_to_X;
    scanf("%d %f", &X, &Y);

    assign_to_y = Y;
    assign_to_X = X;

    printf("Assignment: %f assigned to an int produces %d \n", Y, assign_to_y);
    printf("Assignment: %d assigned to a float produces %f \n", X, assign_to_X);

    printf("Type Casting: (float)%d produces %f \n", X, (float)X);
    printf("Type Casting: (int)%f produces %d \n", Y, (int)Y);

    return 0;
}
