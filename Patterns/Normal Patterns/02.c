/*
Implement this pattern.

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/

#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the N value\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        printf("%d ",j+1);
        printf("\n");
    }
}