// 1
// 2 1 2
// 3 2 1 2 3
// 4 3 2 1 2 3 4

#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        for (k = 2; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}