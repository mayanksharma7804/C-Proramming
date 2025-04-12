#include <stdio.h>
int main()
{
    int sp,cp;
    printf("Enter the Selling Price : ");
    scanf("%d", &sp);
    printf("Enter the Cost Price : ");
    scanf("%d", &cp);
    if (sp>cp){
        printf("He had Profit.");
    }
    else if (sp=cp){
        printf("Neither Loss nor Profit.");
    }
    else {
        printf("He made Loss.");
    }


    return 0;
}