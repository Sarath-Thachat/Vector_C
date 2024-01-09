#include<stdio.h>
int main()
{
    int i, j, s, n;
    char ch;
    printf("Enter the N value\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0,ch='A';j<n;j++)
        {
            if(j<n-i-1)
            printf("  ");
            else
            printf("%c ",ch++);
        }
        printf("\n");
    } 
}