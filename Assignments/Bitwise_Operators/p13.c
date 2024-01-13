/*      Write a program to delete no.of  bits from particular position in a given number.
        Input the no. of bits, at runtime.
        Ex:  Suppose    num     = 100;
		                Binaray : 00000000000000000000000001100100
		                delete 2 bits from 4th position
		                result  : 00000000000000000000000000011100                              */

#include<stdio.h>
void binary(int,int);
int num;

int main()
{
    int i, j, bit, pos;
    printf("Enter the number\n");
    scanf("%d",&num);

    printf("The Binary of %d is : ",num);
    binary(31,0);
    printf("\n");

    printf("Enter the number of bits\n");
    scanf("%d",&bit);
    printf("Enter the position\n");
    scanf("%d",&pos);

    for(i=0;i<bit;i++)
    printf("0");
    binary(31,pos);
    binary(pos-bit,0);
    printf("\n");
}
void binary(int i,int j)
{
    for(int k = i;k>=j;k--)
    printf("%d",(num>>k)&1);
}