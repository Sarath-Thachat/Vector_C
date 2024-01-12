/*      Write a program to check whether the given number is divisible by 8 or not using bitwise operators.     */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    if( (((n>>2)&1)||((n>>1)&1)||((n>>0)&1))==0 )
    printf("%d is divisible by 8\n",n);
    else
    printf("%d is not divisible by 8\n",n);
}