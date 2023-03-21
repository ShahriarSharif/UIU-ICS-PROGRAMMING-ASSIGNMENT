#include <stdio.h>

int main()
{
    int int_num;
    float float_num;
    char c;

    scanf("%d %f %c", &int_num, &float_num, &c);

    printf("The integer value: %d \nThe floating point value: %f \nThe character value: %c", int_num, float_num, c);

    return 0;
}
