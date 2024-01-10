/*
Implement the pattern.

    1 
	2 4 
	3 6 9 
	4 8 12 16 
	5 10 15 20 25 
	6 12 18 24 30 36 

*/

#include<stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the N value\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0,k=i+1;j<=i;k=(i+1)*(j+2),j++)
        {
            printf("%d ",k);
            k=i+1;
        }
        printf("\n");
    }
}