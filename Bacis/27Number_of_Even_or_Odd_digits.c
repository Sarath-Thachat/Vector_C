#include<stdio.h>
int main()
{
    int num, temp, rem, e=0, o=0;
    printf("Enter the Number\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem = temp%10;
        temp/=10;
        
        if(rem%2==0)
        e = e+1;
        else
        o = o+1;
    }
    printf("The number of odd digits = %d.\nThe number of even digits = %d.\n",o,e);
}