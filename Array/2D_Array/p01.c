#include<stdio.h>
int main()
{
   	int i, j, k, res=0, a[3][3], b[3][3], c[3][3];
	printf("Enter the elements of Matrix 1\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter the elements of Matrix 2\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			res = res + a[i][k]*b[k][j];
			c[i][j] = res;
		}
	}
	printf("Matrix  1   *   Matrix  2   =      Matrix  3\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%2d ",a[i][j]);	
		i==1?printf("   *   "):printf("       ");
		
		for(j=0;j<3;j++)
			printf("%2d ",b[i][j]);
		i==1?printf("   =   "):printf("       ");

		for(j=0;j<3;j++)
			printf("%4d ",c[i][j]);
		printf("\n");
	}
}