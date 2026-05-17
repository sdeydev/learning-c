// D C B A
// C B A
// B A
// A

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("%c ", 'A' + (n - i) - (j - 1));
        }
        printf("\n");
    }
    return 0;
}