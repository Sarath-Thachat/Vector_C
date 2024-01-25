/*      Write a program to implement a user-defined strcat function.        */

#include<stdio.h>
char * my_strcat(char *dest,char *src)
{
    int i, j;
    for(i=0;dest[i];i++);
    for(i,j=0;dest[i]=src[j];i++,j++);

    return dest;
}
int main()
{
    char src[50], dest[50];
    printf("Enter the destination string\n");
    scanf("%s",dest);
    printf("Enter the source string\n");
    scanf(" %s",src);
    
    my_strcat(dest,src);

    printf("The destination string becomes %s",dest);
}