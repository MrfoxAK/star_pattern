#include <stdio.h>
int main()
{
     int n;
     printf("Enter the no.of rows: ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= 2*i-1; j++)
          {
               printf(" ");
          }
          for (int k = i; k <= n; k++)
          {
               printf("*");
          }
          printf("\n");    
     }
     for (int i = 1; i <= n; i++)
     {
          for (int j = (2*n-i)-i; j >= 1; j--)
          {
               printf(" ");
          }
          for (int k = 1; k <=i ; k++)
          {
               printf("*");
          }
          printf("\n");
     }
     return 0;
}