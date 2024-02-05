/*      Write a program to check whether the given strings are anagrams or not.     */

#include<stdio.h>
#include<string.h>

char* remove_non_alpha(char*);
char* upper_alpha(char*);
char* bubble_sort(char*);

int main()
{
    int i;
    char a[50], b[50];
    printf("Enter string 1\n");
    scanf("%[^\n]",a);
    printf("Enter string 2\n");
    scanf(" %[^\n]",b);

    char c[50], d[50];
    strcpy(c,a);
    strcpy(d,b);

    remove_non_alpha(a);
    remove_non_alpha(b);

    if(strlen(a)!=strlen(b))
    {
        printf("String 1 (%s) & String 2 (%s) are not anagrams\n",c,d);
        return 0;
    }

    upper_alpha(a);
    upper_alpha(b);
    
    bubble_sort(a);
    bubble_sort(b);

    for(i=0;a[i]&&b[i];i++)
    if(a[i]!=b[i])
    break;

    if(i==strlen(a))
    printf("String 1 (%s) & String 2 (%s) are anagrams\n",c,d);
    else
    printf("String 1 (%s) & String 2 (%s) are not anagrams\n",c,d);
}

char* remove_non_alpha(char* a)
{
    int i,j;
    for(i=0;a[i];i++)
    {
        if(!( (a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z') ))
        {
            for(j=i;a[j]=a[j+1];j++);
            i--;
        }
    }
    return a;
}

char* upper_alpha(char* a)
{
    int i;
    for(i=0;a[i];i++)
    {
        if( !((a[i]>='A')&&(a[i]<='Z')) )
        a[i] = (a[i]^(1<<5));
    }
    return a;
}

char* bubble_sort(char* a)
{
    int i, j, l;
    char temp;
    for(i=0;a[i];i++);
    for(l=0;l<i-1;l++)
    {
        for(j=0;j<i-1-l;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a;
}