#include <stdio.h>
int main()
{
    int a[6], even=0, odd=0;
    printf("Enter the array : ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (a[i]%2==0)
        {
            even++;
        }
        else odd++;
    }
    printf("No. of even nos. are : %d\n", even);
    printf("No. of odd nos. are : %d", odd);
    return 0;        
}