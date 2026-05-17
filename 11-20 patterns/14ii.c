// D C B A
// C B A
// B A
// A

#include <stdio.h>
int main()
{

    int i, n;
    char j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 'A' + (n - i); j >= 'A'; j--) 
        // 'A' + (n-i) = 'A' + (n-1) - (i-1)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}