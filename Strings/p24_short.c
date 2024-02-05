/*      Write a program to reverse the letters in each word excluding the digits of a given string.      
        Ex: Input  - Vector123 India
            Output - rocteV123 aidnI                                                                       */

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
        if( !((a[i]==' ')||((a[i]>='0')&&(a[i]<='9'))) )
        {
            if( ((a[i-1]==' ')||(i==0)||((a[i-1]>='0')&&(a[i-1]<='9'))) )
            x = i;
            else if( !(((a[i+1]>='a')&&(a[i+1]<='z'))||((a[i+1]>='A')&&(a[i+1]<='Z'))) )
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
    printf("The Reversed String = %s\n",a);
}