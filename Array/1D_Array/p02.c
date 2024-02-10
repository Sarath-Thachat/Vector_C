/*      Write a program to print the data in reverse in an array.       */

#include<stdio.h>
int main()
{
    int ele, i, j, k, a[5] = {};
    printf("Enter the integers\n");

    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    ele = sizeof a/sizeof a[0];
    printf("The Array:\n");
    printf("{");
    for(j=0;j<ele;j++)
    printf(" %d ",a[j]);
    printf("}");
    printf("\n");

    printf("The Array after reversing:\n");
    printf("{");
    for(k=ele-1;k>=0;k--)
    printf(" %d ",a[k]);
    printf("}");
    printf("\n");
}