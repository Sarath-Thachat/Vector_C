/*      Write a program to reverse the letters in each word of a given string.      
        Ex: Input  - Vector India Pvt Ltd
            Output - rocteV aidnI tvP dtL                                           */

#include<stdio.h>

int main()
{
    int i, start, end;
    char a[50], temp;
    printf("Enter the string\n");
    scanf("%[^\n]",a);

    printf("The Entered String  = %s\n",a);
    start=0, end=0;
    for(i=0;a[i];i++)
    {
        if(a[i]!=' ')
        {
            if( ((a[i-1]==' ')||(i==0)) )
            start = i;
            else if( ((a[i+1]==' ')||(a[i+1]=='\0')) )
            {
                end = i;
                for(start,end; start<end; start++,end--)
                {
                    temp = a[start];
                    a[start] = a[end];
                    a[end] = temp;
                }
            }
        }
    }
    printf("The Reversed String = %s\n",a);
}