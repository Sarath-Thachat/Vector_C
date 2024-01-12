/*      Write a program to print the second biggest element in an array.       */

#include<stdio.h>
int main()
{
    int i, n, big1, big2;
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

    if(a[0]<a[1])
    big1=a[1],big2=a[0];
    else
    big1=a[0],big2=a[1];

    for(i=2;i<n;i++)
    {
        if(a[i]>big1)
        {
            big2=big1;
            big1=a[i];
        }
        else if((a[i]>big2)&&(a[i]!=big1))
        big2=a[i];
    }
    printf("The second biggest element is %d\n",big2);
}