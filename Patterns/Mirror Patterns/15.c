#include<stdio.h>
int main()
{
    int i, j, l, n;
    char ch='A';
    printf("Enter the N value\n");
    scanf("%d",&n);

    ch = ch+n;
    for(i=-n;i<=n;i++)
    {
        if(i<0) l=-i;
        else    l=i;

        for(j=-n;j<=n;j++)
        {
            if(-(n-l)<j&&j<(n-l))
            printf("  ");
            else if(j<0)
            printf("%c ",ch+j);
            else
            printf("%c ",ch-j);
        }
        printf("\n");
    }
}