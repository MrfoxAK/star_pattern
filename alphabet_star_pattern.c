// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the no of rows: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1;  j <= i; j++)
//         {
//             printf("%c",64+j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the no of rows: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1;  j <= n-i; j++)
//         {
//             printf("%c",64+j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1;  j <= n-i; j++)
        {
            printf("%c",64+j);
        }
        for (int k = 1+1; k <= 2*i-1; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <=n-i; j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}