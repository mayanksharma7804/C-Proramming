#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter a number : ")
    // scanf("%d", &n)
    // if (n%2==0)
    // {
    //     printf("Even no.")
    // }
    // else printf("Odd no.")
    // ternary bhi if else he hai. exp1 ? exp2 : exp3

    int n;
       printf("Enter a number : ");
    scanf("%d", &n);
    n%2==0 ? printf(   "Even no.") : printf("Odd number;");
    return 0;
}