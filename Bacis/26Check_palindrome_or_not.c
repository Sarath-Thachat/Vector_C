#include<stdio.h>
int main()
{
    int num, rem, rev, temp;
    printf("Enter the Number\n");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem = temp%10;
        rev = rev*10 + rem;
        temp/=10;
    }

    if(num==rev)
    printf("%d is Palindrome\n",num);
    else
    printf("%d is Not Palindrome\n",num);
}