// 1
// 2 3
// 4 5 6
// 7 8 9 10 // Floyed's

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = (i * (i - 1)) / 2 + 1; j <= (i * (i + 1)) / 2; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}