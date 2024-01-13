/*      Write a programme for swapping first and last nibbles in a given integer.
        Ex: Suppose num = 10

        Its Binary is  00000000000000000000000000001010
        After swap     10100000000000000000000000000000                               */

#include<stdio.h>
void binary(int);

int main()
{   
    int i,num, p1, p2;
    printf("Enter the Integer\n");
    scanf("%d",&num);
    
    printf("The Binary before swapping : ");
    binary(num);

    for(p1=31,p2=3;p1>=28,p2>=0;p1--,p2--)
    {
        if( ((num>>p1)&1)!=((num>>p2)&1) )
        {
            num = num^(1<<p1);
            num = num^(1<<p2);
        }
    }
    
    printf("After swapping the number is %d\n",num);
    printf("The Binary after swapping  : ");
    binary(num);
}
void binary(int num)
{
    for(int i=31;i>=0;i--)
    printf("%d",((num>>i)&1));
    printf("\n");
}