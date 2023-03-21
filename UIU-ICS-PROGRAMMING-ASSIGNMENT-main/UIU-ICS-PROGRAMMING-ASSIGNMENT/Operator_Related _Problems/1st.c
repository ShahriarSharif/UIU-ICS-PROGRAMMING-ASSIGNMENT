#include <stdio.h>

int main()
{
    float X, Y, Addition, Subtraction, Multiplication, Quotient, Reminder;
    scanf("%f %f", &X, &Y);

    Addition = X + Y;
    Subtraction = X - Y;
    Multiplication = X * Y;
    Quotient = X / Y;
    Reminder = (int)X % (int)Y;

    printf("Addition: %.1f \n", Addition);
    printf("Subtraction: %.1f \n", Subtraction);
    printf("Multiplication: %.1f \n", Multiplication);
    printf("Quotient: %d \n", (int)Quotient);
    printf("Reminder: %.d \n", (int)Reminder);

    return 0;
}