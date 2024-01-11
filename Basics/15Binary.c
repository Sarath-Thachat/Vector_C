#include<stdio.h>
int main()
{
    int num, i, MSB;
    printf("Enter the Integer\n");
    scanf("%d",&num);

    MSB=sizeof(num)*8-1;
    for(i=MSB;i>=0;i--)
    // num & (1<<i) ? printf("1"):printf("0");
    printf("%d",(num>>i) & 1);
    printf("\n");
}