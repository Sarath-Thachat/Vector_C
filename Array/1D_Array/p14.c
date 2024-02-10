/*      Write a program to print the biggest element in an array.       */

#include<stdio.h>
int main()
{
    int i, n, big;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    int a[n];

    printf("Enter the integers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("The Array:\n");
    printf("{");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    printf("}");
    printf("\n");

    big = a[0];
    for(i=1;i<n;i++)
    if(big<a[i])
    big = a[i];

    printf("The biggest element is %d\n",big);
}