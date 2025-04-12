// GP 1,2,4,8,16,32,64,128
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}