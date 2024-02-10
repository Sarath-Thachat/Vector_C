/*      Write a program to check if the elements of an array are palindrome or not.     */

#include<stdio.h>
int main()
{
    int i, j, a[10] ={};
    int n = sizeof a/sizeof a[0];

    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); 

    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        break;
    }
    if(i<j)
    printf("Elements in Array are not Palindrome\n");
    else
    printf("Elements in Array are Palindrome\n");
}