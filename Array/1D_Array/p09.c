/*      Write a program to print the number of times each element in the array is repeated.     */

#include<stdio.h>
int main()
{
    int i, j, count, flag, n;
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
            printf("%d is present %d times\n",a[i],count);
        }
    }
}