/*
Implement this pattern.

    1
    2 5
    3 6 8
    4 7 9 10

*/

#include<stdio.h>
int main()
{
    int i, j, x, n=4;

    for(i=0;i<n;i++)
    {
        for(j=0,x=i+1;j<i+1;j++,x=x+n-j)
        printf("%d ",x);
        printf("\n");
    }
}