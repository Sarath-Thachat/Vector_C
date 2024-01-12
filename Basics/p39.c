/*      Write a one line code to compare if two numbers are equal or not using bitwise operators.      */

#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the two numbers\n");
    scanf("%d%d",&n1,&n2);

    if((n1^n2)==0)
    printf("%d and %d are equal\n",n1,n2);
    else
    printf("%d and %d are not equal\n",n1,n2);
}