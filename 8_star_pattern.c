#include <stdio.h>
int main()
{
     int n;
     printf("Enter N");
     scanf("%d", &n);
     for (int i = 1; i < 2 * n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if ((i == n && (j == 1 || j == n)) || (i == 1 && (j == 1 || j == n)) || (i == 2 * n - 1 && (j == 1 || j == n)))
               {
                    printf(" ");
               }
               else if (i == 1 || i == n || i == (n * 2) - 1 || j == 1 || j == n)
               {
                    printf("*");
               }
               else
               {
                    printf(" ");
               }
          }
          printf("\n");
     }
     return 0;
}