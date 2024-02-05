#include<stdio.h>
void Binary(int);

int main()
{
    int num, p1, p2;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The binary for %d is: ",num);
    Binary(num);

    int MSB = sizeof(num)*8-1;
    //for(p1=MSB, p2=0;p1>=((MSB+1)/2),p2<=((MSB-1)/2);p1--,p2++)
    for(p1=MSB,p2=0;p2<p1;p1--,p2++)
    {
        if(((num>>p1)&1)!=((num>>p2)&1))
        {
            num = num^(1<<p1);
            num = num^(1<<p2);
        }
    }
    printf("The number after reversing is %d\n",num);
    printf("The binary for %d is: ",num);
    Binary(num);
}
void Binary(int num)
{
    int MSB = sizeof(num)*8-1;
    for(int i=MSB;i>=0;i--)
    printf("%d",(num>>i)&1);
    printf("\n");
}