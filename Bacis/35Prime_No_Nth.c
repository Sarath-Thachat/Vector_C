#include<stdio.h>
int main()
{
    int num, i, j, flag=1, temp;
    printf("Enter the N value\n");
    scanf("%d",&num);

    for(i=1;flag<=num;i++)
    {
        temp=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            temp=1;
        }
        if((temp==0)&&(i!=1))
        flag+=1;
    }
    if(num%10==1)
    printf("The %dst Prime Number is %d\n",num,i-1);
    else if(num%10==2)
    printf("The %dnd Prime Number is %d\n",num,i-1);
    else if(num%10==3)
    printf("The %drd Prime Number is %d\n",num,i-1);
    else
    printf("The %dth Prime Number is %d\n",num,i-1);
}