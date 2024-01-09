#include<stdio.h>
void binary (short int);
int main()
{
    float x;
    int op, msb, i;
    printf("Enter the Number\n");
    scanf("%f",&x);

    short int *sip=&x;
    ++sip;
    binary(*sip);
    --sip;
    binary(*sip);
    printf("\n");  
}
void binary(short int j)
{
    int msb, i;
    msb = sizeof(j)*8-1;
    for(i=msb;i>=0;i--)
    printf("%d",j>>i&1);
}