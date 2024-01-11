#include<stdio.h>
int sum(int);

int main()
{
    int num;
    printf("Enter the Integer\n");
    scanf("%d",&num);

    printf("The sum of digits of %d = %d\n",num,sum(num));
}
int sum(int num)
{
    int sum=0,rem;
    while(num!=0)
    {
        rem = num%10;
        sum+=rem;
        num = num/10;
    }
    return sum;
}