#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d", &year);
    if (year%4==0) {
        printf("It is a Leap Year.");
    }
    else {
        printf("It is not a leap Year.");
    }
    return 0;
}