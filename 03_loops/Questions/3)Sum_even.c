// sum of even digits
#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0)
    {
        r = n % 10;
        if (r % 2 == 0) // odd digits ka sum nikalna hai to (r % 2 != 0) kr do
        {
            sum = sum + r;
        }
        n = n / 10;
    }
    printf("The sum of the even digits is : %d", sum);
    return 0;
}