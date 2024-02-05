#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three integers\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x<z) && (y<z))
    printf("z = %d is greater\n",z);
    else if((y<x) && (z<x))
    printf("x = %d is greater\n",x);
    else if((x<y) && (z<y))
    printf("y = %d is greater\n",y);
    else if((x == y) && (x>z))
    printf("x = %d & y = %d are equal and greater\n",x,y);
    else if((y == z) && (y>x))
    printf("y = %d & z = %d are equal and greater\n",y,z);
    else if((x == z) && (x>y))
    printf("x = %d & z = %d are equal and greater\n",x,z);
    else
    printf("x = %d , y = %d & z = %d are equal\n",x,y,z);
}