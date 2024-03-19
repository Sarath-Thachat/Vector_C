/*      Write a program to find the following:
        1. File size.
        2. Number of line.
        3. Maximum line length.
        4. Maximum line number.*/

#include<stdio.h>

int main(int argc,char* argv[])
{
    int i, cnt=0, char_cnt=0, line_cnt=0, big=0,ln=0;
    char ch;
    
    FILE* fp = fopen("data.txt","r");
    
    for(i=0;(ch=fgetc(fp))!=EOF;i++)
    {
        char_cnt++;
        cnt++;
        if(ch == '\n')
        {
            line_cnt++;
            if(cnt>big)
            {
                big = cnt;
                ln = line_cnt;
            }
            cnt = 0;
        }
        
    }
    fclose(fp);
    printf("1. File size : %d\n2. Number of lines : %d\n3. Maximum line length : %d\n4. Maximum line number : %d\n",char_cnt,line_cnt,big,ln);
}