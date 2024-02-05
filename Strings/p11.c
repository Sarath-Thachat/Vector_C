/*      Write a program to implement a user-defined strchr function.        */

#include<stdio.h>
char * my_strchr(char *a,int ch)
{
    int i, flag=0;
    char * p;
    for(i=0;a[i];i++)
    {
        if(a[i]==ch)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    p = a+i;
    else
    p = NULL;

    return p;
}
int main()
{
    char a[50], ch;
    printf("Enter the string\n");
    scanf("%[^\n]",a);
    printf("Enter the character\n");
    scanf(" %c",&ch);
    
    char *p = my_strchr(a,ch);
    if(p==NULL)
    printf("%c is not present in %s\n",ch,a);
    else
    printf("%c is present in %s at address %s\n",ch,a,p);
}