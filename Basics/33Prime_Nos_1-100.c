#include<stdio.h>
int main()
{
    int i, j, temp;

    for(i=1;i<=100;i++)
    {
        temp=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            temp=1;
        }
        if((temp==0)&&(i!=1))
        printf("%d ",i);
    }
}