/*      Write a program to find the following:
        1. File size.
        2. Number of line.
        3. Maximum line length.
        4. Maximum line number.*/

#include<stdio.h>

int main()
{
    int i, char_cnt=0, line_cnt=1, start=0, big=0, line_ch_cnt,ln=0;
    char ch;
    
    FILE* fp = fopen("p01.c","r");
    
    for(i=0;(ch=fgetc(fp))!=EOF;i++)
    {
        if(ch == '\n')
        {
            line_ch_cnt = i-start+1;
            if(line_ch_cnt>big)
            {
                big = line_ch_cnt;
                ln = line_cnt;
            }
            start = i+1;
            line_cnt++;
        }
        char_cnt++;
    }
    printf("1. File size : %d\n2. Number of lines : %d\n3. Maximum line length : %d\n4. Maximum line number : %d\n",char_cnt,line_cnt,big,ln);
}