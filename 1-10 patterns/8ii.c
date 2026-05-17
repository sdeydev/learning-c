//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int i, j, k, n;

    printf("Enter even number of rows: ");
    scanf("%d", &n);
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
    return 0;
}