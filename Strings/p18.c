/*      Write a program to find a substring in a given string (User-Defined strstr function).       */

#include<stdio.h>
char *my_strstr(char*,char*);

int main()
{
    char a[50], b[50];
    printf("Enter the main string\n");
    scanf("%[^\n]",a);
    printf("Enter the substring\n");
    scanf(" %[^\n]",b);

    char *p = my_strstr(a,b);
    if(p==NULL)
    printf("The string is not present in %s",a);
    else
    printf("The string is present at address %s in %s\n",p,a);
}
char *my_strstr(char* a,char* b)
{
    int i, j, l;
    for(i=0;a[i];i++)
    {
        for(j=0;b[j];j++)
        {
            if(!(a[i+j]==b[j]))
            break;
        }
        if(b[j]=='\0')
        return a+i;
    }
    return NULL;
}