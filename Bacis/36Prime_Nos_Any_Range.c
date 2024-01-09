#include<stdio.h>
int Prime_number(int);

int main()
{
    int n1, n2;
    printf("Enter the range\n");
    scanf("%d%d",&n1,&n2);

    printf("The Prime Numbers between %d & %d are:\n",n1,n2);
    
    if(n1<n2)
    for(n1;n1<=n2;n1++)Prime_number(n1);
    else
    for(n2;n2<=n1;n2++)Prime_number(n2);    
}
int Prime_number(int n1)    
{
    int temp=0;
    for(int j=2;j<n1;j++)
    if(n1%j==0)temp=1;
    if((temp==0)&&(n1!=1))
    printf("%d ",n1);
}