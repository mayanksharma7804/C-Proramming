// AP -- 4,7,10,13,16...n terms

#include <stdio.h>
int main()
{
    int n;
    printf("Till what term you want ? : ");
    scanf("%d", &n);
    for (int i = 4; i <= 1 + 3 * n; i = i + 3)
    {
        printf("%d ", i);
    }
    return 0;
}