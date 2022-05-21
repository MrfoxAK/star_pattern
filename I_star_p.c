#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    int mid = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (n % 2 == 0)
            {
                if (i == 1 || i == n || j == mid)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (i == 1 || i == n || j == mid+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}