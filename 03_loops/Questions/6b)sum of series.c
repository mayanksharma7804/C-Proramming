// sum of series : 1-2+3-4+5-6...
// Method 1 :
// #include <stdio.h>
// int main()
// {
//     int n, a, sum;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i%2!=0) sum=sum+i;
//         if (i%2==0) sum=sum-i;
//         sum = sum + i;
//     }
//     printf("The sum is : %d", sum);
//     return 0;
// }

// Method 2 :
// agar ham grps mein bath le to--(1-2)+(3-4)+(5-6)...=-1 + -1 + -1 ... Therefore 6nos. yani 3 grps
#include <stdio.h>
int main()
{
    int n, a, sum;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum = 0;
    if (n & 2 == 0)
    {
        sum = -n / 2;
    }
    else
    {
        sum = -n / 2 + n;
    }
    printf("The sum is :  %d", sum);
    return 0;
}
