#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter two values\n");
   scanf("%d%d",&x,&y);

   if(x<y)
   printf("%d is greater than %d\n",y,x);
   else if(x>y)
   printf("%d is greater than %d\n",x,y);
   else
   printf("%d and %d are equal\n",x,y);
}