#include<stdio.h>
void Binary(int);

int main()
{
    int num, p1, p2;
    printf("Enter a Number\n");
    scanf("%d",&num);
    printf("The binary for %d is:\n",num);
    Binary(num);

    printf("Enter the two positions\n");
    scanf("%d%d",&p1,&p2);

    if(((num>>p1)&1) != ((num>>p2)&1))
    {
        num = num^(1<<p1);
        num = num^(1<<p2);
    }
    printf("After swapping the 2 bits, the num = %d",num);
    printf("The binary for %d is:\n",num);
    Binary(num);
}

void Binary(int num)
{
    int MSB = sizeof(num)*8-1;
    for(int i=MSB;i>=0;i--)
    printf("%d",num>>i&1);
    printf("\n");
}