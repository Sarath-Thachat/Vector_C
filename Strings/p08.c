/*      Write a program for a user-defined strncpy function using two strings.      */

#include<stdio.h>
char * my_strncpy(char *b, char* a, int n)
{
    int i, j;
    for(j=0;a[j];j++);
    if(n<j)
    {
        for(i=0;i<n;i++)
        b[i]=a[i];
        for(i;i<=j;i++)
        b[i] = '\0';
    }
    else
    {
        for(i=0;i<=j;i++)
        b[i]=a[i];
        for(i;i<=n;i++)
        b[i] = '\0';
    }
}
int main()
{
    int n;
    char a[50], b[50];
    printf("Enter the string\n");
    scanf("%[^\n]*%c",a);
    printf("Enter the number of elements to be copied\n");
    scanf("%d",&n);
    printf("The given string(a)  = %s\n",a);
    my_strncpy(b,a,n);
    printf("The copied string(b) = %s\n",b);
}