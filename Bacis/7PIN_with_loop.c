#include<stdio.h>
#include<unistd.h>
int main()
{
    int x=1234,y,i;
    
    Retry:
    if(i==5)
    i=0;
    i++;

    printf("Enter the PIN\n");
    scanf("%d",&y);
    
    if (y==x)
    printf("PIN verified. Device unlocked\n");
    else
    {
        printf("Invalid PIN. Try again\n");

        if(i<5)
        goto Retry;

        if(i==5)
        {
            printf("Attempt limit reached. Wait 30 seconds\n");
            sleep(2);
            goto Retry;
        } 
    }
}