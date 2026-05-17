//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1

#include <stdio.h>
int main()
{
    int i, j, k, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        int val = 1;
        for (k = 0; k < i + 1; k++)
        {
            printf("%4d", val);
            val = (val * (i - k)) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}