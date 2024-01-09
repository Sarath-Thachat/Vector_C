/*
Implement this pattern.

            1
          1 2 3
        1 2 3 4 5
      1 2 3 4 5 6 7
    1 2 3 4 5 6 7 8 9

*/

#include<stdio.h>
int main()
{
    int i, j, s, n=5;

    for(i=0;i<n;i++)
    {
        for(s=1;s<=n-i-1;s++)
        printf("  ");
        for(j=1;j<=i*2+1;j++)
        printf("%d ",j);
        printf("\n");
    }
}