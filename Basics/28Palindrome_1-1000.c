#include<stdio.h>
int Reverse_Number(int); 
int main()
{
    int rev, num;
    for(num=1;num<=1000;num++)
    {
        rev = Reverse_Number(num);
        if(num==rev)
        printf("%d\n",num);
    }
}
int Reverse_Number(int n)
{
    int rem, rev;
    rev = 0;

    while(n!=0)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n/=10;
    }
    return rev;
}