#include<stdio.h>
int Factorial(int);
int main()
{
    int n1, n2, rem, x, y;
    printf("Enter the Range\n");
    scanf("%d%d",&n1,&n2);

    printf("The Strong Numbers between %d and %d are:\n",n1,n2);
    
    for(n1;n1<n2;n1++)
    {
        x=n1, y=0;
        while(x!=0)
        {
            rem = x%10;
            x/=10;
            y = y + Factorial(rem);
        }
        if(n1==y)
        printf("%d ",n1);
    }
}
int Factorial(int n)
{
    int z=1;
    if(n!=0)
    for(n;n>=1;n--)
    z = z*n;
    else
    z=1;
    return z;
}