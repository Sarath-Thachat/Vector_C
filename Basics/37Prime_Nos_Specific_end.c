#include<stdio.h>
int Prime_number(int);

int main()
{
    int n1, n2, n3, x;
    printf("Enter the range\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter the Ending Digit\n");
    scanf("%d",&n3);

    printf("The Prime Numbers ending with %d between %d & %d are:\n",n3,n1,n2);
    
    if(n1<n2)
    for(n1;n1<=n2;n1++)
    {
        x = Prime_number(n1);
        if(x%10==n3)
        printf("%d ",x);
    }
    else
    for(n2;n2<=n1;n2++)
    {
        x = Prime_number(n2);
        if(x%10==n3)
        printf("%d ",x);
    }    
}
int Prime_number(int n1)    
{
    int temp=0, x;
    for(int j=2;j<n1;j++)
    if(n1%j==0)
    temp=1;
    if((temp==0)&&(n1!=1))
    x=n1;
    return x;
}