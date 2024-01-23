/*      Write a prograam to check if a string is palindrome or not.     */

#include<stdio.h>
int main()
{
    int i, j;
    char a[50];
    printf("Enter the string\n");
    scanf("%s",a);
    
    for(j=0;a[j];j++);

    for(i=0,j=j-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        break;
    }
    if(i<j)
    printf("The given String is Not Palindrome\n");
    else
    printf("The given String is Palindrome\n");
}