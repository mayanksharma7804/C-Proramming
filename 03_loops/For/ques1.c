#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        printf("Hello World ");
    }
    return 0;
}