#include<stdio.h>
int main()
{
    ac:
    char c;
    printf("Enter the character\n");
    scanf(" %c",&c);

    if((c>=65) && (c<=90))
    printf("%c is Uppercase Alphabet\n",c);
    else if ((c>=97) && (c<=122))
    printf("%c is Lowercase Alphabet\n",c);
    else if ((c>=48) && (c<=57))
    printf("%c is Digit\n",c);
    else
    printf("%c is a Special Character\n",c);
    goto ac;
}