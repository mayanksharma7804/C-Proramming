#include <stdio.h>
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a = 10, b = 20;
    //calling max function
    int m = max(a,b);
    printf("The maximum of the two numbers is : %d", m);
    return 0;
}