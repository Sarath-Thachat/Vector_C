#include<stdio.h>
int main()
{
    int x = 10, y = 20;
    int *p = &x;
    printf("Before Modification\n");
    printf("x = %d, y = %d, *p = %d\n",x,y,*p);
    printf("&x = %p, &y = %p, &p = %p\n",&x,&y,&p);
    printf("p = %p\n",p);

    p++;
    *p = 15;

    printf("After Modification\n");
    printf("x = %d, y = %d, *p = %d\n",x,y,*p);
    printf("&x = %p, &y = %p, &p = %p\n",&x,&y,&p);
    printf("p = %p\n",p);
}