/*      Write a program to remove non alphabets from a given string.     */

#include<stdio.h>
int main()
{
    int i, j;
    char a[50];
    printf("Enter the string\n");
    scanf("%[^\n]",a);

    for(i=0;a[i];i++)
    {
        if( ((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')) )
        continue;
        else
        {
            for(j=i;a[j]=a[j+1];j++);
            i--;
        }
    }

    printf("The converted string is\n%s",a);
}