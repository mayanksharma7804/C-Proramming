// wap to print sum of given number and it's reverse
#include <stdio.h>
int main()
{
    int n, ld, sum, a;
    printf("Enter a number : ");
    scanf("%d %d", &n, &a);
    int r = 0;
    while (n != 0)
    {
        r = (r * 10);
        ld = n % 10; //ld means last digit, suppose no. is 123
        r = r + ld;
        n = n / 10;
    }
    // r = r / 10;
    printf("The reverse of the no. is : %d\n", r);
    sum =r+a;
    printf("The sum of the given number and it's reverse is : %d", sum);
    return 0;
}