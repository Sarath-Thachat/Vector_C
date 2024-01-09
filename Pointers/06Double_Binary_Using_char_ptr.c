#include<stdio.h>
int main()
{
    int msb, i;
    double x;
    printf("Enter the Double Value\n");
    scanf("%lf",&x);

    char *p = &x;
    char *temp = p;

    for(p+=7;p>=temp;p--)
    {
        msb = sizeof(*p)*8-1;
        for(i=msb;i>=0;i--) 
        printf("%d",*p>>i&1);   
    }
    printf("\n");
}