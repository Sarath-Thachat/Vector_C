#include<stdio.h>
int main()
{
    int i, j, n;
    char ch='A';
    printf("Enter the N value\n");
    scanf("%d",&n);

    ch = ch+n;
    for(i=0;i<=n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(-(n-i)<j&&j<(n-i))
            printf("  ");
            else if(j<0)
            printf("%c ",ch+j);
            else
            printf("%c ",ch-j);
        }
        printf("\n");
    }
}