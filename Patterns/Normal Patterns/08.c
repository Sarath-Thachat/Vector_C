#include<stdio.h>
int main()
{
    int i, j, x, n=5;

    for(i=0;i<n;i++)
    {
        for(j=0,x=1;j<i+1;j++)
        {
            printf("%d ",x);
            x=!x;
        }
        printf("\n");
    }
}