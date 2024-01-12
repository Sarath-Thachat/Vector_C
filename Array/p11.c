/*      Write a program to display only the non-repeated elements from the given Array.     */

#include<stdio.h>
int main()
{
    int i, j, count, flag, n;
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

    printf("The repeated elements are:\n");
    for(i=0;i<n;i++)
    {
        flag=0;
        for(int k=i-1;k>=0;k--)
        {
            if(a[k]==a[i])
            {
                flag=1;
                break;
            }
        }
        count=0;
        if(flag!=1)
        {
            for(j=i;j<n;j++)
            {
                if(a[i]==a[j])
                count++;
            }
            if(count==1)
            printf("%d ",a[i]);
        }
    }
}