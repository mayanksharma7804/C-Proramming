#include <stdio.h>
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (char j = "E"; j >= "A"; j--)
        {
            printf("%c", j);
        }
    }
    return 0;
}