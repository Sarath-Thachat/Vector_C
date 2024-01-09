#include<stdio.h>
int main()
{
    int num, pos;
    printf("Enter the number and the postion\n");
    scanf("%d%d",&num,&pos);

    num&(1<<pos) ? puts("Bit is SET"):puts("Bit is CLEAR");
}