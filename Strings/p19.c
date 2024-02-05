/*      Write a program to implement user-defined strcmp function (compare 2 strings).      */

#include<stdio.h>
int my_strcmp(char* a,char* b);

int main()
{
    char a[50], b[50];
    printf("Enter string 1\n");
    scanf("%[^\n]",a);
    printf("Enter string 2\n");
    scanf(" %[^\n]",b);

    int n = my_strcmp(a,b);
    if(n==0)
    printf("String 1 (%s) and String 2 (%s) are equal.\n",a,b);
    else if(n<0)
    printf("String 2 (%s) is greater than string 1 (%s) .\n",b,a);
    else
    printf("String 1 (%s) is greater than String 2 (%s) .\n",a,b);
}
int my_strcmp(char* a,char* b)
{
    int i, x=0;
    for(i=0;(a[i]&&b[i]);i++)
    {
        x = a[i]-b[i];
        if(x!=0)
        return x;
        if( (a[i]=='\0')||(b[i]=='\0') )
        break;
    }
    return x;
}