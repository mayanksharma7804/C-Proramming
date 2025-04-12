#include <stdio.h>
void main()
{
    int a[5], max, min;
    printf("Enter the array : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max=min=a[0];
    for (int i = 0; i <5; i++)
    {
        if (a[i]<min) min=a[i];
        if (a[i]>max) max=a[i];        
    }
    printf("max element is : %d\n", max);
    printf("min element is : %d", min);
}