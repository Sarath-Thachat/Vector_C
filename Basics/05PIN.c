#include<stdio.h>
int main()
{
    int a=1234,b;
    printf("Enter the PIN\n");
    scanf("%d",&b);

    if(a == b)
    printf("PIN Verified. Device Unlocked\n");
    else
    printf("Invalid PIN. Try again\n");
}