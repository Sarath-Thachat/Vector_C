/*      Write a Program to reverse the Contents of a given file.        */

#include<stdio.h>
int main(int argc, char* argv[])
{
    FILE* fs = fopen(argv[1],"r");
    FILE* fd = fopen(argv[2],"w");

    int i = 0;
    char ch, a[50];
    
    while((a[i]=fgetc(fs))!=EOF)
        i++;

    printf("%d\n%s\n",i,a);
    //i = i-1;

    fclose(fs);

    while(i>=0)
        fputc(a[i],fd);

}