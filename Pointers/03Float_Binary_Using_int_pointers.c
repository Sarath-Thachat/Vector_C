#include<stdio.h>
void binary (int);
int main()
{
    float x;
    int op, msb, i;
    printf("Enter the Number\n");
    scanf("%f",&x);
    int *ip= &x;
    binary(*ip);
    printf("\n");    
}
void binary(int j)
{
    int msb, i;
    msb = sizeof(j)*8-1;
    for(i=msb;i>=0;i--)
    printf("%d",j>>i&1);
}