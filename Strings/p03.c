/*      Write a program to print the string characters in reverse.      */

#include<stdio.h>
int main()
{
    int i;
    char c[500];
    printf("Enter the string\n");
    scanf("%[^\n]%*c",c);

    for(i=0;c[i];i++);

    for(i;i>=0;i--)
    printf("%c ",c[i]);
}