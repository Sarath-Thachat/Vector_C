/*
Implement this pattern.

    1
    2  4
    1  3  5
    2  4  6  8
    1  3  5  7  9

*/

#include<stdio.h>
int main()
{
    int i, j, x, n=5;

    for(i=0;i<n;i++)
    {
        for(j=0,x=1;j<i+1;j++,x=x+2)
        {
            if(i%2==0)
            printf("%d ",x);
            else
            printf("%d ",x+1);
        }
        printf("\n");
    }
}