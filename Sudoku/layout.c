#include<stdio.h>
int main()
{
    int k, j, i = 0, a[10]={1,2,3,4,5,6,7,8,9};
    // printf("=========================================================== \n");
    // printf("||     |     |     ||     |     |     ||     |     |     ||\n");
    // printf("|| %2d  | %2d  | %2d  || %2d  | %2d  | %2d  || %2d  | %2d  | %2d  ||\n",i,i,i,i,i,i,i,i,i);
    // printf("||_____|_____|_____||_____|_____|_____||_____|_____|_____||\n");
    for(k=0;k<3;k++)
    {
        printf("=========================================================== \n");
        for(j=0;j<2;j++)
        {
            
            printf("||     |     |     ||     |     |     ||     |     |     ||\n");
            printf("|");
            for(i=0;i<3;i++)
            printf("| %2d  ",a[i]);
            printf("|");
            for(i;i<6;i++)
            printf("| %2d  ",a[i]);
            printf("|");
            for(i;i<9;i++)
            printf("| %2d  ",a[i]);
            printf("||");
            printf("\n");
            printf("||_____|_____|_____||_____|_____|_____||_____|_____|_____||\n");
        }
        printf("||     |     |     ||     |     |     ||     |     |     ||\n");
            printf("|");
            for(i=0;i<3;i++)
            printf("| %2d  ",a[i]);
            printf("|");
            for(i;i<6;i++)
            printf("| %2d  ",a[i]);
            printf("|");
            for(i;i<9;i++)
            printf("| %2d  ",a[i]);
            printf("||");
            printf("\n");
    }
    printf("=========================================================== \n");
}