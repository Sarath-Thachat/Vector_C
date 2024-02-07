/*      Write a program to implemet a recursion function to perform sum of digits of a given integer.       */

#include<stdio.h>
int sum_digi(int,int);
int main()
{
    int num, sum;
    printf("Enter the integer\n");
    scanf("%d",&num);

    sum = sum_digi(num,0);
    printf("Sum of digits of %d is %d\n",num,sum);
}
int sum_digi(int n,int s)
{
    if(n!=0)
    return sum_digi(n/10,(s+n%10));
    else
    return s;
}