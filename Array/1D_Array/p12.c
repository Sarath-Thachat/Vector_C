/*      Write a program to delete the array element based on array index (array position) value.        */

#include<stdio.h>
int main()
{
    int i, x, n;
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

    printf("Enter the Index value\n");
    scanf("%d",&x);
    if((x>=0)&&(x<n-1))
    {
        for(i=x;i<n-1;i++)
        a[i]=a[i+1];
        a[n-1]=0;

        printf("The Array after deleting Index Value %d:\n",x);
        printf("{");
        for(i=0;i<n;i++)
        printf(" %d ",a[i]);
        printf("}");
        printf("\n");
    }
    else
    printf("Invalid Index Value\n");
    return 0;
}