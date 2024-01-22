/*      Write a program to find the count of alphabets, digits and special characters.      */

#include<stdio.h>
int main()
{
    int i, alph=0, digit=0, ch=0;
    char s[20];
    printf("Enter the characters\n");
    scanf("%s",s);
    
    for(i=0;s[i];i++)
    {
        if( ((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='a')&&(s[i]<='z'))  )
        alph+=1;
        else if((s[i]>='0')&&(s[i]<='9'))
        digit+=1;
        else
        ch+=1;
    }
    printf("Number of Alphabets = %d\nNumber of Digits = %d\nNumber of Special Characters = %d\n",alph,digit,ch);
}