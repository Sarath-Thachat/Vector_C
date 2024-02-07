/*      Write a program to find factorial of agiven integer using recursiion function.      */

#include<stdio.h>

int fact(int,int);

int main()
{
    int num, x;
    printf("Enter the number\n");
    scanf("%d",&num);

    x = fact(num,1);
    printf("%d! = %d\n",num,x);
}
int fact(int n,int f)
{
    if(n!=0)
    return fact(n-1,f*n);
    else 
    return f;
}