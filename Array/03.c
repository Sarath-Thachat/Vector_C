/*      Write a program to enter 10 elements into an array and find the particular given element is present or not. 
        If present display that how many number of times the  element is present.                                        */

#include<stdio.h>
int main()
{
    int i, j, ele, n, flag=0, a[10] = {};
    
    ele = sizeof a/sizeof a[0];

    printf("Enter the integers\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    
    printf("The Array:\n");
    printf("{");
    for(j=0;j<ele;j++)
    printf(" %d ",a[j]);
    printf("}");
    printf("\n");

    printf("Enter the number to be checked\n");
    scanf("%d",&n);
    
    for(j=0;j<ele;j++)
    if(a[j]==n)
    flag+=1;
    
    if(flag!=0)
    printf("%d is present in the Array %d times\n",n,flag);
    else
    printf("%d is not in Array\n",n);
}