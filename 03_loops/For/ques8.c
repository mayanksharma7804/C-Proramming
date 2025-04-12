// 100,50,25,...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    float a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%f ", a);
        a = a * 0.5;
    }
    return 0;
}

//the code is running in the online compiler