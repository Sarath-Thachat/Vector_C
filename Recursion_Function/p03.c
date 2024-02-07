/*      Write a program to find the fibonnacci sequence for the given integer using recursion function.     */

#include<stdio.h>

void fib(int,int,int);

int main()
{
    int num;
    printf("Enter the integer\n");
    scanf("%d",&num);

    fib(num,0,1);
}
void fib(int n,int x, int y)
{
    if(x<=n)
    {
        printf("%d ",x);
        fib(n,y,x+y);
    }
}