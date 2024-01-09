/*
Implement this pattern.

             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
   1   5  10  10   5   1

*/

#include<stdio.h>
int factorial(int);
int main()
{
    int i, j, s, n;
    printf("Enter the N value\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(s=0;s<n-i;s++)
        printf("  ");

        for(j=0;j<i+1;j++)
        printf("%3d ",factorial(i)/(factorial(j)*(factorial(i-j))));
        printf("\n");
    }
    
}
int factorial (int i)
{
    int res=1;
    if(i==0)
    return res;
    else
    {
        for(i;i>0;i--)
        res=res*i;
    }
    return res;
}