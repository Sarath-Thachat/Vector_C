#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);

    // ac:
    // i++;
    // if(i<=10)
    // {
    //     printf("%d * %2d = %2d\t%d * %2d = %2d\n",x,i,x*i,y,i,y*i);
    //     goto ac;
    // }
    
    for(i=1;i<=10;i++)
    printf("%d * %2d = %2d\t%d * %2d = %2d\n",x,i,x*i,y,i,y*i);
}