/*
Implement this pattern.

    * * * * *
     * * * *
      * * *
       * *
        *
       * *
      * * *
     * * * *
    * * * * *  

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

        for(s=0;s<n-l;s++)
        printf(" ");

        for(j=0;j<l+1;j++)
        printf("* ");

        printf("\n");
    }
}