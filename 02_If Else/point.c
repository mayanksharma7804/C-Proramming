#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates : ");
    scanf("%d %d", &x, &y);
    if (x==0 && y!=0)
    {
        printf("Point lies on the y-axis");
    }
    else if (y==0 && x!=0)
    {
        printf("Point lies on the x-axis");
    }
    else if (x!=0 && y!=0)
    {
        printf("Point is in the Plane.");
    }
    else printf("Point lies at the origin.");
    return 0;
}