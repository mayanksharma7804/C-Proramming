// wap to print reverese of a given no.
#include <stdio.h>
int main()
{
    int n, ld;
    printf("Enter a number : ");
    scanf("%d", &n);
    int r = 0;
    while (n != 0)
    {
        r = (r * 10);
        ld = n % 10; //ld means last digit, suppose no. is 123
        r = r + ld;
        n = n / 10;
    }
    // r = r / 10;
    printf("The reverse of the no. is : %d", r);
    return 0;
}