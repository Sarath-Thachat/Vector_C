#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    num & (num-1) ? puts("Not a power of 2"):puts("Power of 2");
}