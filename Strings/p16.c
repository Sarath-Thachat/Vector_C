/*      Write a program to remove the consecutive spaces in a given string.     */

#include<stdio.h>
int main()
{
    int i, j;
    char a[50];
    printf("Enter the string\n");
    scanf("%[^\n]",a);

    for(i=0;a[i];i++)
    {
        if( (a[i]==' ')&&(a[i-1]==' ') )
        {
            for(j=i;a[j]=a[j+1];j++);
            i--;
        }
    }
    printf("The converted string is\n%s",a);
}