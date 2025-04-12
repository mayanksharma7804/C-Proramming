//check if all the three points lie along a straight line.
#include <stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter first point coordinates : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter first point coordinates : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter first point coordinates : ");
    scanf("%d %d", &x3, &y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if (m2==m1)
    {
        printf("All three points lie on the same line.");
    }
    else printf ("Points do not lie on the same line.");
    return 0;
}