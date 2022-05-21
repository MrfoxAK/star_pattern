#include<stdio.h>

void main()
{
    int n,i,j,k=0;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for( i=1; i<=n; i++ ) {
        i<=n/2 ? k++ : k--;
        for( j=1; j<=n; j++) {
            if(j <= (n/2+1)-k || j >= (n/2-1)+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}