#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the Radius : ");
    scanf("%f", &radius); //& ye keh rha hai ki input kro ek integer x naam ke address pe.
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("The area of the circle is : %f", area);
    return 0;
    
}