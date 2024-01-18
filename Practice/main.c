#include<stdio.h>
int main()
{
    int x=1;
	if(x++>=x)
	printf("%d\n",x);
	else
	printf("%d\n",++x);
}