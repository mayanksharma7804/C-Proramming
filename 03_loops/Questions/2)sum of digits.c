// sum of digits of a given no.
#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter the number : ");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    printf("The sum of the digits is : %d", sum);
    return 0;
}