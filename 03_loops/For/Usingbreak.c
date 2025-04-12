// prime no. or not using break-->it is used to terminate. Break ka ulta hai Continue
#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int a=0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0) //i is a factor of n 
        {
            a=1;
            break;
        }
    }
    if (n==1) {
        printf("Neither Prime nor Composite!"); 
    }
    else if (a==0) {
        printf("The given no. is Prime. ");
    }
    else {
        printf("The given no. is Composite. ");
    }
    return 0;
}