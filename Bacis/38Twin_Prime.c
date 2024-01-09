#include<stdio.h>
void Prime_number(int);

int main()
{
    int n1, n2, i, x;
    printf("Enter the Range\n");
    scanf("%d%d",&n1,&n2);

    for(n1;n1<=n2;n1++)
    Prime_number(n1);
}
void Prime_number(int n1)
{
    int temp=0, y;
    for(int i=2;i<n1;i++)
    {
        if(n1%i==0)
        temp=1;
    }
    if((temp!=1)&&(n1!=1))
    {
        if((n1-y)==2)
        printf("%d,%d  ",y,n1);
        y=n1; 
    }
}