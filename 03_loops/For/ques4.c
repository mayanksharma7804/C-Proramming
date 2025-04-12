// table of 19
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number : ");
    scanf("%d", &x);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", x, i, i * x);
    }
    return 0;
} 