#include <stdio.h>     //This code is working at online platforms, I don't know why not here.
int main()
{
    int a, b, q, r, s;
    printf("Enter Divisor : ");
    scanf("%d", &a);
    printf("Enter Dividend : ");
    scanf("%d", &b);
    q = a/b ;
    r = a - (b*q) ;     // ham isko ek step se bhi kr skte the, i.e. a%b se remainder he aata!!
    printf("\n");
    printf("The ramainder is : %d", r);

    printf("\n");
    printf("\n");
    printf("\n");

    s = a % b;
    printf("The trick wala remainder is : %d", s);
    return 0;
}