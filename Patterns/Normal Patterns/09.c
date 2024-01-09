/*
Implement this pattern.

    1
    2  6
    3  7  10
    4  8  11  13
    5  9  12  14  15

*/

#include<stdio.h>
int main()
{
    int i, j, x, n=5;
    
    for(i=0;i<n;i++)
    {
        for(j=0,x=i+1;j<i+1;j++,x=x+n-j)
        printf("%d ",x);
        printf("\n");
    }
}