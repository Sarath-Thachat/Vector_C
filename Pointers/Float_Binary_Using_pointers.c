#include<stdio.h>
void binary (char);
int main()
{
    float x;
    int op, msb, i;
    printf("Enter the Number\n");
    scanf("%f",&x);
    printf("Select the option\n(1)Integer pointer\n(2)Short Integer pointer\n(3)Character Pointer\n");
    scanf("%d",&op);

    switch(op)
    {
        case 1: int *ip= &x;
        binary(*ip);
        printf("\n");
        break;
        case 2: short int *sip=&x;
        ++sip;
        binary(*sip);
        --sip;
        binary(*sip);
        printf("\n");
        break;
        case 3: char *cp=&x;
        cp+=3;
        binary(*cp);
        cp--;
        binary(*cp);
        cp--;
        binary(*cp);
        cp--;
        binary(*cp);
        printf("\n");
        break;
        default: printf("Not Available");
        break;
    }    
}
void binary(char j)
{
    int msb, i;
    msb = sizeof(j)*8-1;
    for(i=msb;i>=0;i--)
    printf("%d",j>>i&1);
}