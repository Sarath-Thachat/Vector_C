#include<stdio.h>
// #include<math.h>
int Power_function(int, int);

int main()
{
    int n1, n2, power, rem, x, y, z;

    printf("Enter the Range\n");
    scanf("%d%d",&n1,&n2);

    for(n1;n1<n2;n1++)                                  //loop for range
    {
        power=0, x=n1;                                  //find the number of digits
        while(x!=0)
        {
            x/=10;
            power+=1;
        }
        y = n1, z=0, rem=0;                             //find sum of power of digits
        while(y!=0)
        {
            rem = y%10;
            // x = x + pow(rem,power);
            z = z + Power_function(rem,power);
            y/=10;
        }
        if(n1==z)                                       //check amstrong or not
        printf("%d ",n1);
    } 
}

int Power_function(int b, int p)                        //user-defined power function
{
    int res = 1;
    for(int i=1;i<=p;i++)
    res = res*b;
    return res;
}