#include <stdio.h>
int main()
{
    int num, n, d, rev, temp;
    for (num = 1; num <= 500; num++)
    {
        n=num;
        temp=num;
        rev=0;
        while (n>0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        if (rev==temp)
        {
            printf("%d\t", temp);
        }               
    }
    return 0;
}