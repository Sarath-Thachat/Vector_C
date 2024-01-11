#include<stdio.h>
int Binary(int);

int main()
{
    int num, pos, op, temp;

    printf("Enter the Number\n");
    scanf("%d",&num);
    printf("The binary of %d is\n",num);
    Binary(num);
    printf("Enter the option:\n(1)Set\n(2)Clear\n(3)Compliment\n");
    scanf("%d",&op);
    printf("Enter the position of the bit\n");
    scanf("%d",&pos);

    switch(op)
    {
        case 1: temp=num|(1<<pos);
                printf("The binary after setting the bit is\n");
                break;
        case 2: temp=num&~(1<<pos);
                printf("The binary after clearing the bit is\n");
                break;
        case 3: temp=num^(1<<pos);
                printf("The binary after complimenting the bit is\n");
                break;
    }

    Binary(temp);
    printf("The new number = %d\n",temp);
}
int Binary(int n)
{
    int MSB;
    MSB=sizeof(n)*8-1;
    for(int i=MSB;i>=0;i--)
    // num&(1<<i) ? printf("1"):printf("0");
    printf("%d",n>>i & 1);
    printf("\n");
}