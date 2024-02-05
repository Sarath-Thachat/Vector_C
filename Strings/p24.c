/*      Write a program to reverse the letters in each word excluding the digits of a given string.      
        Ex: Input  - Vector123 India
            Output - rocteV123 aidnI                                                                       */

#include<stdio.h>
#include<string.h>

char* cat_fun(char*,char*,char*);
char* reverse(char*);

int main()
{
    int i, j=0, k;
    char a[100], b[100], c[100];
    printf("Enter the string\n");
    scanf("%[^\n]",a);

    for(i=0;a[i];i++,j++)
    {
        if( !(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z'))) )
        {
            b[j]=a[i];
            if( (((a[i+1]>='a')&&(a[i+1]<='z'))||((a[i+1]>='A')&&(a[i+1]<='Z'))) )
            {
                b[j+1]='\0';
                cat_fun(a,b,c);
                j=-1;
            }
        }
        else
        {
            b[j]=a[i];
            if( !(((a[i+1]>='a')&&(a[i+1]<='z'))||((a[i+1]>='A')&&(a[i+1]<='Z'))) )
            {
                b[j+1]='\0';
                reverse(b);
                cat_fun(a,b,c);
                j=-1;
            }
        }
    }
    printf("The given string is -    %s\n",a);
    printf("the reversed string is - %s\n",c);
}

char* cat_fun(char* a,char* b,char* c)
{
    int k;
    strcat(c,b);
    for(k=0;b[k];k++)
    b[k]='\0';
}

char* reverse(char* b)
{
    int i, j, temp;
    for(j=0;b[j];j++);
    for(i=0,j=j-1;i<j;i++,j--)
    {
        if(b[i]!=b[j])
        {
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
        }
    }
    return b;
}