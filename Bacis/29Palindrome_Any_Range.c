#include<stdio.h>
void Palindrome(int);
int main()
{
    int num, n1, n2;
    printf("Enter the Range\n");
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
    for(n1;n1<=n2;n1++)Palindrome(n1);
    else
    for(n1;n1>=n2;n1--)Palindrome(n1);
}
void Palindrome(int num)
{
    int rev=0, rem, temp=num;

    //With while loop
    while(temp!=0)
    {
        rem = temp%10; 
        rev = rev*10+rem; 
        temp/=10;
    }

    //With For Loop
    for(;temp!=0;temp/=10)rev = rev * 10 + (temp%10);
    
    if(rev==num)printf("%d ",num);
}