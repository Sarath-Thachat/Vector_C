/*      Write a program to implement a funtion called string copy, that has to receive 
        two character array addresses to copy a string from source array to destibnation array.     */

#include<stdio.h>
char * string_copy(char *, char *);

int main()
{
    char a[100],b[100];
    printf("Enter the string\n");
    scanf("%s",a);
    printf("Character array A = %s",a);
    printf("\n");

    string_copy(a,b);

    printf("Character array B = %s",b);
    printf("\n");
}
char * string_copy(char *a, char *b)
{
    int i;
    for(i=0;a[i];i++);
    for(i;i>=0;i--)
    b[i]=a[i];
}