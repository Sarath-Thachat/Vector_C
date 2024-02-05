#include<stdio.h>
int main()
{
    int x=0, y=1, z, n, i;
    printf("Enter the Maximum Value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",x);
        z=x+y;
        x=y;
        y=z;
    }
}