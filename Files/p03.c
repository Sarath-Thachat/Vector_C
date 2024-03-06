/*      Write a command to implement move command.      */

#include<stdio.h>
int main(int argc, char* argv[])
{
    FILE* fs = fopen(argv[1],"r");
    if(fs == NULL)
    {
        printf("rm : Cannot find path '%s' because it does not exist.\n",argv[1]);
    }
    
    FILE* fd = fopen(argv[2],"w");

    char ch;
    while((ch=fgetc(fs))!=EOF)
    fputc(ch,fd);

    fclose(fs);
    fclose(fd);
    
    remove(argv[1]);
}