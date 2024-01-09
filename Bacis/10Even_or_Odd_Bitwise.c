#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    num&1 ? puts("Odd"):puts("Even");
}