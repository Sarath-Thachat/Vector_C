/*      Write a program to pass a string to a function and convert it to its opposite case.
        Also return some other string from the function.                                            */

#include<stdio.h>
char * Opposite_Case(char *);
int main()
{
    char a[100];
    printf("Enter the string\n");
    scanf("%s",a);

    char *b = Opposite_Case(a);

    printf("%s",a);
    printf("\n");
    printf("%s",b);
}
char * Opposite_Case(char *a)
{
    for(int i=0;a[i];i++)
    {
        if( ((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')) )
        a[i] = a[i]^32;
    }
    return "End";
}