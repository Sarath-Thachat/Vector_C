/*      Write a program to reversing the array elements in a given array.       */

#include<stdio.h>
int main()
{
    int i, j, temp, a[10] ={};
    int n = sizeof a/sizeof a[0];

    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("The Array:\n");
    printf("{");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    printf("}");
    printf("\n");

    for(j=0;j<=(n-1)/2;j++)
    {
        temp = a[j];
        a[j] = a[n-j-1];
        a[n-j-1] = temp;
    }

    printf("The Reversed Array:\n");
    printf("{");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    printf("}");
    printf("\n");
}