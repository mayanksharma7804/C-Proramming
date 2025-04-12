#include <stdio.h>
int main()
{
    float a, c;
    printf("Enter the number : ");
    scanf("%f", &a);
    int b = a ;
    c = a - b ;
    printf("The fractional of the entered number is : %f", c);
    return 0;
}