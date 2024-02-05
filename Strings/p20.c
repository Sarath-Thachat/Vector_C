/*      Write a program to implement user-defined strncmp function (compare 2 strings upto given length).      */

#include<stdio.h>
int my_strncmp(char*,char*,int);
int main()
{
    int n;
    char a[50], b[50];
    printf("Enter string 1\n");
    scanf("%[^\n]",a);
    printf("Enter string 2\n");
    scanf(" %[^\n]",b);
    printf("Enter the N value\n");
    scanf("%d",&n);

    int x = my_strncmp(a,b,n);
    if(x==0)
    printf("String 1 (%s) and String 2 (%s) are equal.\n",a,b);
    else if(x<0)
    printf("String 2 (%s) is greater than string 1 (%s) .\n",b,a);
    else
    printf("String 1 (%s) is greater than String 2 (%s) .\n",a,b);
}
int my_strncmp(char* a,char* b,int n)
{
    int i,x=0;
    for(i=0;((i<n)&&(a[i])&&(b[i]));i++)
    {
        x=a[i]-b[i];
        if(x!=0)
        return x;
    }
    return x;
}