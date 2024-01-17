/*      Write a C program to find the complement of a given number 
        and then print it's binary, decimal, octal and Hexadecimal values.      */

#include<stdio.h>
void binary(int);

int main()
{
    int i, num, comp;
    printf("Enter the Number\n");
    scanf("%d",&num);

    binary(num);

    comp = num;
    for(i=31;i>=0;i--)
    comp = comp^(1<<i);

    printf("Complement of %d is %d\n",num,comp);
    binary(comp);
    printf("The octal & Hexadecimal values are %o & %x\n",comp,comp);
}
void binary(int num)
{
    printf("The binary of %d is : ",num);
    for(int i=31;i>=0;i--)
    printf("%d",((num>>i)&1));
    printf("\n");
}