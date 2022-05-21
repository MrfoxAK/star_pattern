#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /* print blank spaces */
        for (int j = 1; j <= n - i; j++)
            printf(" ");

        /* Display number in ascending order upto middle*/
        for (int j = 1; j <= i; j++)
            printf("%d", j);

        /* Display  number in reverse order after middle */
        for (int j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }
    return 0;
}