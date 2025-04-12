#include <stdio.h>
int main()         //99 se bda hona chahiye par 1000 se chota hona chahiye
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n>99 && n<1000) //dono chezein true honi chahiye tabhi chalega && laga hai to.
    {
        printf("It's a three digit no.");
    }
    else {
        printf("It's not a three digit number.");
    }
    return 0;
}