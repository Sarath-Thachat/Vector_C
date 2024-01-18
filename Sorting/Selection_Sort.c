#include<stdio.h>
void Array(int *, int);
void Sort(int *, int);
int main()
{
    int n, i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array Values\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("The entered array is : ");
    Array(a,n);

    Sort(a,n);
    
    printf("The sorted array is  : ");
    Array(a,n);
}

void Array(int *a, int n)
{
    printf("{");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("}");
    printf("\n");
}
void Sort(int *a, int n)
{
    int i, j, temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}