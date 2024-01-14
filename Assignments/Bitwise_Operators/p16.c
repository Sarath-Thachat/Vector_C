/*      Write a macro to clear a bit at the position N in an integer M.     
        
        Ans: The macro is - #define clear (num&~(1<<pos))                                         */

#include<stdio.h>
void binary(int);
#define clear (num&~(1<<pos))

int main()
{
    int num, pos;
    printf("Enter the Integer\n");
    scanf("%d",&num);
    printf("The binary of %d : ",num);
    binary(num);
    
    printf("Enter the position\n");
    scanf("%d",&pos);

    num = clear;
    printf("Integer after clearing the bit is %d\nThe binary of %d is : ",num,num);
    binary(num);
}
void binary(int num)
{
    for(int i=31;i>=0;i--)
    printf( "%d",((num>>i)&1) );
    printf("\n");
}