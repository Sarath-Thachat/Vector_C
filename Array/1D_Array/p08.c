/*      Write a program to find the number of prime numbers from a given array of elements and display it.      */

#include<stdio.h>
int main()
{
    int i, j, flag, count=0, n;
    printf("Enter the total number of elements\n");
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

    printf("The Prime Numbers in the Array are:\n");
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        if(a[i]%j==0)
        flag=1;
        if((flag!=1)&&a[i]>1)
        {
            count++;
            printf("%d ",a[i]);
        }
    }
    printf("\nNumber of Prime Numbers = %d\n",count);
}