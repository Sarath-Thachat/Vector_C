#include<stdio.h>
int main()
{
    int x=0, y=1, z, n;
    printf("Enter the Maximum Value\n");
    scanf("%d",&n);
    for(z=0;z<n;z=x+y)
    {
        printf("%d ",z);
        x=y;
        y=z;
    }
}