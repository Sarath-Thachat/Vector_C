/*      Write a program to find the string length.      */

#include<stdio.h>
int main()
{
    int i;
    char a[20];
    printf("Enter the string\n");
    scanf("%s",&a);

    for(i=0;a[i];i++);
    
    printf("Length of the string = %d\n",i);
}