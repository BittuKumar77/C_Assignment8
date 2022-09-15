/*
   *
   * *
   *   *
   *     *
   * * * * *
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int k;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if(i==n)
          for(int k=1; k<=n; k++)
             printf("*");
    }
    return 0;
}
