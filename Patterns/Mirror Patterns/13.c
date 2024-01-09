/*
Implement this pattern.

                1
             1  2  3
          1  2  3  4  5
       1  2  3  4  5  6  7
    1  2  3  4  5  6  7  8  9
       1  2  3  4  5  6  7
          1  2  3  4  5
             1  2  3
                1

*/
#include<stdio.h>
int main()
{
    int i, j, l, s, n;
    printf("Enter the N value\n");
    scanf("%d",&n);

    for(i=-n;i<=n;i++)
    {
        if(i<0) l=-i;
        else    l=i;
        
        for(s=0;s<l;s++)
        printf("  ");

        for(j=1;j<2*(n-l);j++)
        printf("%d ",j);

        printf("\n");
    }
}