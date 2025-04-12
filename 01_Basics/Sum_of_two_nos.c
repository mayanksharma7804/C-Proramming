#include <stdio.h>

int main()
{
    float n1, n2, sum;
    printf("Enter First Number : ");
    scanf("%f", &n1);
    printf("Enter Second Number : ");
    scanf("%f", &n2);
    sum = n1 + n2;
    printf("The sum of the entered Numbers is : %f", sum);
    return 0;
}