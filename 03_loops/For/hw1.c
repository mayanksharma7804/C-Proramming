//to print even nos. from 1 - 100 using continue
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0) //even no.
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}