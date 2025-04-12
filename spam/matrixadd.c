#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the first matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix 1 is : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 is : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", c[i][j]);
        }
    }
    return 0;
}