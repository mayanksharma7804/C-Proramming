#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter the array : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n%d", a[2]);
    return 0;
}