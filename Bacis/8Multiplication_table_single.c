#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the number\n");
    scanf("%d",&x);

    // ac:
    // i++;
    // if(i<=10)
    // {
    //     printf("%d * %2d = %2d\n",x,i,x*i);
    //     goto ac;
    // }
    for(i=1;i<=10;i++)
    printf("%d * %2d = %2d\n",x,i,x*i);
}