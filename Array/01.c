/*      Write a program to scan 5 integers into an array and display it.        */

#include<stdio.h>
int main()
{
    int i, j, a[5] = {};
    printf("Enter the integers\n");

    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(j=0;j<5;j++)
    printf("%d ",a[j]);

    printf("\n");
}