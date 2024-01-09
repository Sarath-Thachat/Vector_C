#include<stdio.h>
int main()
{
    char a;
    float x,y;
    int z;
    printf("Enter the 1st Number\n");
    scanf("%f",&x);
    printf("Enter the Operator\n");
    scanf(" %c",&a);
    printf("Enter the 2nd Number\n");
    scanf("%f",&y);

    if(a == '+')
    printf("%0.f + %0.f = %0.f\n",x,y,x+y);
    else if(a == '-')
    printf("%0.f - %0.f = %0.f\n",x,y,x-y);
    else if(a == '*')
    printf("%0.f * %0.f = %0.f\n",x,y,x*y);
    else if(a == '/')
    {
        if(y!=0)
        printf("%0.2f / %0.111f = %f\n",x,y,x/y);
        else
        printf("Not Defined");
    }
    else if(a == '%')
    {
        if(y!=0)
        {
            z = (int)x%(int)y;
            printf("%0.f %% %0.f = %0.f\n",x,y,z);
        }
        else
        printf("Not Defined"); 
    }
    else
    printf("Operator invalid\n");
}