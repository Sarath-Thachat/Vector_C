#include<stdio.h>
int main()
{
    int num, MSB;
    printf("Enter the number\n");
    scanf("%d",&num);

    MSB = sizeof(num)*8-1;

    num & 1<<MSB ? puts("Negative") : puts("Positive");
}