#include <stdio.h>
int main()
{
    int x ;
    printf("Enter the Integer : ");
    scanf("%d", x);
    if (x<0){
        printf("%d", -x);
    }
    else {
        printf("%d", x);
    }
    return 0;
}