// A
// A B
// A B C
// A B C D

#include <stdio.h>
int main()
{
    int i, n;
    char j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 'A'; j <= 'A' + (i - 1); j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}