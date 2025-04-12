#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter n1 : ");
    scanf("%d", &a);
    printf("Enter n2 : ");
    scanf("%d", &b);
    printf("Enter n3 : ");
    scanf("%d", &c);
    if (a>b && a>c)
    {
        printf("%d is Greatest.", a);
    }
    else if (b>c)
    {
        printf("%d is Greatest.", b);
    }
    else {
        printf("%d is Greatest.", c);
    } 
    return 0;
}