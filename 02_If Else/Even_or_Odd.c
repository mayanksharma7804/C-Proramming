#include <stdio.h>
int main()
{
    int x ;
    printf("Enter the number : ");
    scanf("%d", &x);
    if (x%2==0){                            //normal brackets ke andar condition likhi jati hai
        printf("EVEN NUMBER");
    }
    else {
        printf("ODD NUMBER");
    }    
    return 0;
}