#include<stdio.h>
int main()
{
    int num, MSB;
    printf("Enter the Number\n");
    scanf("%d",&num);

    MSB = sizeof(num)*8-1;

    (num>>MSB) & 1 ? puts("Negative"):puts("Positive");
}