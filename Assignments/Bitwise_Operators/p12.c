/*      Write a program to swap the adjacent bytes of a given 4-digit hexadecimal number.
        Ex: given number =   0x1234
	        after swap   :   0x3412                                                             */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Hexadecimal Number without 0x\n");
    scanf("%x",&num);

    printf("Entered Number : 0x%x\n",num);
    printf( "After swap     : 0x%x\n",(((num&0x7f)<<8)|(num>>8))  );
}