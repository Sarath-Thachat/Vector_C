/*      Write a program to copy one array elements ito another array.       */

#include<stdio.h>
int main()
{
    int i, a[5], b[5];
    int n = sizeof a/ sizeof a[0];

    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("The 1st Array:\n");
    printf("{");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    printf("}");
    printf("\n");

    for(i=0;i<n;i++)
    b[i]=a[i];

    printf("The 2nd Array:\n");
    printf("{");
    for(i=0;i<n;i++)
    printf(" %d ",b[i]);
    printf("}");
    printf("\n");
}