//find if it lies on the x axis or y axis or at the origin
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the (x,y) coordinates : ");
    scanf("%d %d", &x, &y);
    if (y==0 && x!=0)
    {
        printf("The point lies on the x-axis.");
    }
    else if (x==0 && y!=0)
    {
        printf("The point lies on the y-axis.")
    }
    else
    {
        printf("The point lies on the origin.")
    }
    return 0;
}