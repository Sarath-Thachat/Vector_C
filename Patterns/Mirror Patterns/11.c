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

        for(j=0,s=1;j<n+1;j++)
        {
            if(j<n-l)
            printf(" ");
            else
            printf("* ");
        }
        printf("\n");
    }
}