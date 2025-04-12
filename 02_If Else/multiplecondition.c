#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n>5)
    {
        printf("Number is greter than 5.");
    }
    else {
        printf("Number is not greater than 5.");
    }
    return 0;   
}