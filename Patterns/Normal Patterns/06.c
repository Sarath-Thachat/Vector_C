#include<stdio.h>
int main()
{
    int i, j, s, n=5;
    char ch;

    for(i=0;i<n;i++)
    {
        for(s=0;s<=i;s++)
        printf("  ");
        for(j=1,ch='A';j<=n-i;j++,ch++)
        {
            if(i%2==0)
            printf("%c ",ch);
            else
            printf("%d ",j);
        }
        printf("\n");
    }
}