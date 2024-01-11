#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter X & Y\n");
    scanf("%d%d",&x,&y);

    x=x^y;
    y=x^y;
    x=x^y;

    printf("After swapping, X = %d & Y = %d\n",x,y);
}