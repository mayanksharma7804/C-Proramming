#include <stdio.h>
int main()
{
    int a,b, r, p;
    printf("Enter length of the Rectangle : ");
    scanf("%d", &a);
    printf("Enter breadth of the rectangle : ");
    scanf("%d", &b);
    r = a * b;
    p = 2*(a + b);
    if (r>p)
    {
        printf("Area is Greater than Perimeter.");
    }
    else {
        printf("Perimeter is greater than Area.");
    }
    return 0;
}