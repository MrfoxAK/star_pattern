// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//     printf("\n");    
//     }
    
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf("*");
//         }
//     printf("\n");
//     }

// }




// #include <stdio.h>
// int main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//     printf("\n");    
//     }
    
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int h = 4;
//     for (int i = 1; i <= h; i++)
//     {
//         for (int k = 1; k <=h-i; k++)
//         {
//             printf("#");
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int h = 5;
//     for (int i = 1; i <= h; i++)
//     {
//         for (int k = 1; k <= h-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(j>=5-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




#include <stdio.h>
int main()
{
    int h = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= h-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}






























