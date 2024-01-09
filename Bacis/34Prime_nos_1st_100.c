#include<stdio.h>
int main()
{
    int i, j, flag=1, temp;

    for(i=1;flag<=100;i++)
    {
        temp=0;
        for(j=2;j<i;j++)
        if(i%j==0)temp=1;
        if((temp==0)&&(i!=1))
        {
            printf("%d ",i);
            flag+=1;
        }
    }
}