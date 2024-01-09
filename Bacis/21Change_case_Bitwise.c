#include<stdio.h>
void Binary(char);

int main()
{
    char ch;
    printf("Enter the Alphabet\n");
    scanf(" %c",&ch);

    if((ch>='A') && (ch<='Z'))
    {
        printf("%c is Uppercase\n",ch);
        printf("Binary of %c is:",ch);
        Binary(ch);
        ch = ch|(1<<5);
        printf("Lowercase: %c\n",ch);
        printf("Binary of %c is:",ch);
        Binary(ch);
    }
    else if((ch>='a') && (ch<='z'))
    {
        printf("%c is Lowercase\n",ch);
        printf("Binary of %c is:",ch);
        Binary(ch);
        ch = ch&~(1<<5);
        printf("Uppercase: %c\n",ch);
        printf("Binary of %c is:",ch);
        Binary(ch);
    }
    else
    {
        printf("ERROR: The input is not an Alphabet\n");
    }
}
void Binary(char ch)
{
    int MSB=sizeof(char)*8-1;
    for(int i=MSB;i>=0;i--)
     printf("%d",(ch>>i)&1);
    printf("\n");
}