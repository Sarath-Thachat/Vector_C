/*      Write a program to reverse the string using recursion function.     */

#include<stdio.h>
#include<string.h>

char* reverse(char*,int,int);

int main()
{
    char a[50];
    printf("Enter the string\n");
    scanf("%[^\n]",a);

    printf("The entered string is  %s\n",a);
    int l = strlen(a);

    reverse(a,l-1,0);

    printf("The reversed string is %s\n",a);
}
char* reverse(char* a, int j, int i)
{
    char temp;
    if(i<j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        return reverse(a,--j,++i);
    }
    return a;
}