/*
Implement this pattern.

    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
*/

#include<stdio.h>
int main()
{
    int i, j, l=1, n;
    printf("Enter the N value\n");
    scanf("%d",&n);
    l=l+n;
    for(i=0;i<n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(j==0)
            continue;
            else if( (-(n-i)<j)&&(j<(n-i)) )
            printf("  ");
            else if(j<0)
            printf("%d ",l+j);
            else
            printf("%d ",l-j);
        }
        printf("\n");
    }
}