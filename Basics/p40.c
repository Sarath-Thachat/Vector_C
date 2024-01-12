/*      Write a program to rotate the bits. Input  the no. of  rotations at runtime.
        Ex: binary      : 10000000000000000000000000001011
            rotations   : suppose 3 times right,  then
    	    result      : 01110000000000000000000000000001

            binary      : 10000000000000000000000000001011
            rotations   : suppose 4 times left,  then
	        result      : 00000000000000000000000010111000                                  */

#include<stdio.h>
void binary(int);
int n;
int main()
{
    int i, x, dir;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The binary of %d is\n",n);
    for(i=31;i>=0;i--)
    binary(i);
    printf("\n");
    printf("Choose from the following.\n(1)Rotate right\n(2)Rotate left\n");
    scanf("%d",&dir);
    printf("Enter the number of bits to be rotated\n");
    scanf("%d",&x);

    switch(dir)
    {
        case 1: printf("The rotated binary is:\n");
                for(i=x-1;i>=0;i--)
                binary(i);
                for(i=31;i>=x;i--)
                binary(i);
                printf("\n");
                break;
        case 2: printf("The rotated binary is:\n");
                for(i=31-x;i>=0;i--)
                binary(i);
                for(i=31;i>=31-(x-1);i--)
                binary(i);
                printf("\n");
                break;
        default: printf("The entered option is not available\n");
    }
}
void binary(int i)
{
    printf("%d",(n>>i)&1);
}