/*      Write a program to implement a user-defined strncat function.        */

#include<stdio.h>
char *my_strncat(char *dest,char *src, int n)
{
    int i, j;
    for(i=0;dest[i];i++);
    for(i,j=0;j<n;i++,j++)
    dest[i]=src[j];
    dest[i] = '\0';
    return dest;
}
int main()
{
    int n;
    char src[50], dest[50];
    printf("Enter the destination string\n");
    scanf("%s",dest);
    printf("Enter the source string\n");
    scanf(" %s",src);
    printf("Enter the number of elements to be concatenated\n");
    scanf("%d",&n);
    
    my_strncat(dest,src,n);

    printf("The destination string becomes %s",dest);
}