/*      Write a program to print float binary without using pointer concept.    */

#include<stdio.h>
union U
{
    float f;
    struct st
    {
        char c0;
        char c1;
        char c2;
        char c3;
    }v1;
}v = {12.1};

int main()
{
    int i;
    for(i=7;i>=0;i--)
        printf("%d",(v.v1.c3)>>i&1);
    printf(" ");
    for(i=7;i>=0;i--)
        printf("%d",(v.v1.c2)>>i&1);
    printf(" ");
    for(i=7;i>=0;i--)
        printf("%d",(v.v1.c1)>>i&1);
    printf(" ");
    for(i=7;i>=0;i--)
        printf("%d",(v.v1.c0)>>i&1);
}