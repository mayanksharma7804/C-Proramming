//print odd nos. from 1 to 100
// #include <stdio.h>
// int main()
// {
//     for (int i=1; i<=100; i++)
//     {
//         if (i%2!=0) {
//             printf("%d ", i);        
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0) //even no.
        {
            continue;
        }
        ("%d ", i);
    }
    return 0;
}
