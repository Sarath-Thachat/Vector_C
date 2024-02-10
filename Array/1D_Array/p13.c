/*      Write a program to insert an element into the array based on array index (array position) value.        */

#include<stdio.h>
int main()
{
    int i, x, y, n;
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
        printf("Enter the element value\n");
        scanf("%d",&y);

        for(i=n-1;i>x;i--)
        a[i]=a[i-1];
        a[x]=y;

        printf("The Array after inserting element at Index Value %d:\n",x);
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