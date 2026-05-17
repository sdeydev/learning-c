// 1
// 1 0
// 1 0 1
// 1 0 1 0

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int val = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d", val);
            val = (val == 1) ? 0 : 1; // or just val = 1 - val;
        }
        printf("\n");
    }
    return 0;
}