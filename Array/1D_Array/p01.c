/*      Write a program to scan 5 integers into an array and display it.        */

#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    int a[n];

    printf("Enter the integers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(j=0;j<n;j++)
    printf("%d ",a[j]);

    printf("\n");
}