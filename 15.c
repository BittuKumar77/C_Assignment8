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
    printf("Enter the number: ");
    scanf("%d", &n);
    int k;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=2*n-1; j++)
        {
            if (j == 6-i || j == 4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if(i==n)
          for(int k=1; k<=2*n-1; k++)
             printf("*");
    }
    return 0;
}
