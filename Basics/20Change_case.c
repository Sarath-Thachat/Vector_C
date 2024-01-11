#include<stdio.h>
int main()
{
    char a;
    int x, y;
    printf("Enter the Alphabet\n");
    scanf(" %c",&a);

    if((a>='A') && (a<='Z'))
    printf("Lowercase: %c\n",a+32);
    else if((a>='a') && (a<='z'))
    printf("Uppercase: %c\n",a-32);
    else
    printf("ERROR: The input is not an Alphabet\n");
}