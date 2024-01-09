/*
Implement this pattern.

    A  B  C  D  E  D  C  B  A
    A  B  C  D     D  C  B  A
    A  B  C           C  B  A
    A  B                 B  A
    A                       A

*/
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
            if((-i<j)&&(j<i))
            printf("  ");
            else if(j<0)
            printf("%c ",ch+j);
            else
            printf("%c ",ch-j);
        }
        printf("\n");
    }
}