/*      Write a program to reverse the order in which words appear in a given string.      
        Ex: Input  - Vector India Pvt Ltd
            Output - Ltd Pvt India Vector                                                 */

#include<stdio.h>

int main()
{
    int i, j, x, y;
    char a[50], temp;
    printf("Enter the string\n");
    scanf("%[^\n]",a);

    printf("The Entered String  = %s\n",a);
    x=0, y=0;
    for(i=0;a[i];i++)
    {
        if(a[i]!=' ')
        {
            if( ((a[i-1]==' ')||(i==0)) )
            x = i;
            else if( ((a[i+1]==' ')||(a[i+1]=='\0')) )
            {
                y = i;
                for(x,y;x<y;x++,y--)
                {
                    temp = a[x];
                    a[x] = a[y];
                    a[y] = temp;
                }
            }
        }
    }
    for(i=i-1,j=0;j<i;j++,i--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("The Reversed String = %s\n",a);
}