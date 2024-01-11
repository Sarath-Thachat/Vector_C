#include<stdio.h>
int main()
{
    int n1, n2, sum;
    printf("Enter the range\n");
    scanf("%d%d",&n1,&n2);
    for(n1;n1<=n2;n1++)
    {
        sum=0;
        for(int i=1;i<n1;i++)
        {
            if(n1%i==0)
            sum+= i;
        }
        if(n1==sum)
        printf("%d ",n1);
    }
}