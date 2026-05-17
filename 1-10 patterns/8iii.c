//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    * // for odd

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    * // for even

#include <stdio.h>

void oddpattern(int n)
{
    int i, j, k;

    int org = n;

    // upper
    n = (n - 1) / 2;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower
    n = org;
    n = (n + 1) / 2;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * n - 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void evenpattern(int n)
{
    int i, j, k;

    int org = n;

    // upper
    n = n / 2;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower
    n = org;
    n = n / 2;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * n - 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if (n % 2 == 1)
        oddpattern(n);
    else
        evenpattern(n);

    return 0;
}