/*      Write a program to copy one file to multiple files.     */
#include<stdio.h>
int main(int argc, char* argv[])
{
    FILE* fs = fopen(argv[1],"r");
    if(fs==NULL)
    {
        printf("cp : Cannot find path '%s' because it does not exist.\n",argv[1]);
        return 0;
    }
    int i = 2;
    while(i<argc)
    {
        FILE* fd = fopen(argv[i],"w");

        char ch;

        while((ch=fgetc(fs))!=EOF)
        {
            fputc(ch,fd);
        }
        fclose(fd);
        i++;
        rewind(fs);
    }
}