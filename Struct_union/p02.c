/*      Write a program to design separate functions to scan structure variables and print them.    */

#include<stdio.h>
struct st
{
    int x;
    char c;
    float f;
};
void scan(struct st* s)
{
    scanf("%d %c%f",&(s->x),&(s->c),&(s->f));
}
void print(struct st v)
{
    printf("v.x = %d\nv.c = %c\nv.f = %f\n",v.x,v.c,v.f);
}
int main()
{
    struct st v;
    printf("Enter the structure members\n");
    scan(&v);
    printf("The structure members:\n");
    print(v);
}