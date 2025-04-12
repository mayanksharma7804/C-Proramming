#include <stdio.h>
int main()
{
    int i, a[10], search, first, last, middle, n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
        ;
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be searched : ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    while (first<=last)
    {
        if(a[middle]<search)
        {
            first=middle+1;
            middle=(first+last)/2;
        }
        else if (a[middle]==search)
        {
            printf("\nThe number, %d found at Position %d", search, middle);
            break;
        }
        else 
        {
            last=middle-1;
            middle = (first+last)/2;
        }        
    }
    if (first>last)
    {
        printf("The number, %d is not found in the given array", search);
    }
    return 0;
}