/*      Write a program to find the number of even and odd elements in a given array.       */

#include<stdio.h>
int main()
{
    int i, odd=0, even=0, a[5];
    int n = sizeof a/ sizeof a[0];

    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("The Array:\n");
    printf("{");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    printf("}");
    printf("\n");

    for(i=0;i<n;i++)
    if(a[i]%2==0)
    even++;
    else
    odd++;

    printf("The number of odd elements = %d\nThe number of even elements  = %d\n",odd,even);
}