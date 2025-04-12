#include <stdio.h>

void reverse(int n)
{
    int d, rev = 0;
    int temp = n;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    printf("The reverse of the number is : %d", rev);
}

void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%s", &n);
    reverse(n);
}