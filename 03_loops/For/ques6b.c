// 4,7,10,13...n terms using extra varibles

#include <stdio.h>
int main()
{
    int n; // itni baar loop chalega
    printf("Enter a number : ");
    scanf("%d", &n);
    // extra variable 'a'
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a + 3;
    }
    return 0;
}