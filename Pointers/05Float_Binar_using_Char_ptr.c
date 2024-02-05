#include<stdio.h>
int main()
{
    float x;
    int msb, i;
    printf("Enter the Number\n");
    scanf("%f",&x);
    
    char *cp=&x;
    char *temp=cp;
    for(cp+=3;cp>=temp;cp--)
    {
        msb = sizeof(*cp)*8-1;
        for(i=msb;i>=0;i--)
        printf("%d",*cp>>i&1);
    }
    printf("\n");
}