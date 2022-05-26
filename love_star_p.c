#include <stdio.h>
int main()
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 17; j++)
        {
            if (j >= 3 - i && j <= 6 + i || j >= 12 - i && j <= 15 + i)
            {
                printf("LOVE");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= 17; j++)
        {
            if (j >= i + 1 && j <= 17 - i)
            {
                printf("LOVE");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    return 0;
}
