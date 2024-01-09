#include<stdio.h>
// #include<math.h>
int Power_function(int,int);
int main()
{
    int base, power;
    printf("Enter the Base\n");
    scanf("%d",&base);
    printf("Enter the Power\n");
    scanf("%d",&power);

    // res=pow(base,power);
    // printf("%d raised to the power of %d is %d\n",base,power,res);
    printf("%d raised to the power of %d is %d\n",base,power,Power_function(base,power));
}
int Power_function(int b, int p)
{
    int res=1;
    for(int i=1;i<=p;i++)
    {
        res = res*b;
    }
    return res;
}