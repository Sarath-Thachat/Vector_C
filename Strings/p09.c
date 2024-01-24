/*      Write a program to find the given character count in a given string.    */

#include<stdio.h>
int main()
{
    int i, count = 0;
    char ch, a[50];
    printf("Enter the string\n");
    scanf("%[^\n]",a);
    printf("Enter the character to be counted\n");
    scanf(" %c",&ch);

    for(i=0;a[i];i++)
    {
        if(a[i]==ch)
        count++;
    }
    printf("Number of times %c is present in %s = %d\n",ch,a,count);
}