#include<stdio.h>
int main()
{
    int n, y=1;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        y=y*i;
    }
    
    printf("The Factorial for %d (%d!) is = %d\n",n,n,y);
}