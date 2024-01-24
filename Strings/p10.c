/*      Write a program to display the overall character count in a given string.   */

#include<stdio.h>
int main()
{
    int i, j, count, flag;
    char a[50];
    printf("Enter the string\n");
    scanf("%[^\n]*%c",a);

    for(i=0;a[i];i++)
    {
        flag = 0;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        count = 0;
        if(flag!=1)
        {
            for(j=i;a[j];j++)
            {
                if(a[i]==a[j])
                count++;
            }
            printf("Number of times %c is present = %d\n",a[i],count);
        }
    }
}