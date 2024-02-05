/*      Write a program to reverse the given string using a function.       */

#include<stdio.h>
char* rev(char *);
int main()
{
    int i;
    char a[100];
    printf("Enter the string\n");
    scanf("%s",a);

    printf("The original string is\n%s\n",a);

    rev(a);
    printf("The reverse string is\n");
    printf("%s",a);
    printf("\n");
}
char * rev(char *a)
{
    int i, j, temp;
    for(j=0;a[j];j++);
    for(i=0,j=j-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }       
    }
}