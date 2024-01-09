#include<stdio.h>
int main()
{
    int x, MSB, i;
    printf("Enter an Integer\n");
    scanf("%d",&x);

    int *p = &x;
    MSB = sizeof(*p)*8-1;
    for(i=MSB;i>=0;i--)
    {
        printf("%d",*p>>i&1);
    }
}