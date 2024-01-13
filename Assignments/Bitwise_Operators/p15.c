/*      Write a logic to extract P bits from position N in an integer M.    */

#include<stdio.h>
int main()
{
    int i, num, bits, pos;
    printf("Enter the Integer (M)\n");
    scanf("%d",&num);

    printf("Enter number of bits (P)\n");
    scanf("%d",&bits);

    printf("Enter the position (N)\n");
    scanf("%d",&pos);

    for(i=pos;i>pos-bits;i--)
    printf("%d",((num>>i)&1));
    printf("\n");
}