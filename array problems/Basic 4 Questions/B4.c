// 4) Write a program for matrix multiplication of user given data.

#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int r1, c1;
    int r2, c2;
    int i, j, k;

    // Taking matrix 1 size input
    printf("Enter number of rows and columns for 1st matrix(eg. 2 3): ");
    scanf("%d%d", &r1, &c1);

    // Taking matrix 2 size input
    printf("Enter number of rows and columns for 2nd matrix(eg. 3 2): ");
    scanf("%d%d", &r2, &c2);

    // Matrix validity check
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Matrix 1 element input
    printf("Enter Matrix 1: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Matrix 2 element input
    printf("Enter Matrix 2: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // calculation
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            int sum = 0;
            for (k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    // printing resultant matrix
    printf("The resultant matrix: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}