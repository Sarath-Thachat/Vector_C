/*      Laura is a vintner. She prepares the best wine in the whole of France, but sells only one bottle per day.
        It takes her more than one year to prepare the best wines. She wants to maximize her earnings over a period
        of time. 
        The wine bottles are numbered for [1 to N] and stored in a single file in a long rack that is open at both
        the ends. She can retrive a bottle of wine from either end of the rack. 
        The price of each bottle of wine is not uniform; some are better and have higher intrinsic value. 
        Wine bottle (i) has a value of v[i].
        the wine quality increases with age and commands higher price. People pay more for wine bottles that have aged
        longer. A person will pay v[i]*a for a bottle of wine of age (a). The wine bottle sold on day 1 has age 1 and
        increases each subsequent day by 1.
        
        Input Format:
        Line 1 : A positive integer N representing the number of bottles in the rack.
        Line 2 : N spaces separated positive integers representing the value of the wine bottles v[i].                              */

#include<stdio.h>
int main()
{
    int i, j, age, n, sum=0;
    printf("Enter the number of Wine Bottles (N)\n");
    scanf("%d",&n);

    int v[n];
    printf("Enter the intrinsic values of the Wine Bottles\n");
    for(i=0;i<n;i++)
    scanf("%d",&v[i]);

    for(i=0,j=n-1,age=1;i<j,age<=n;age++)
    {
        if(v[i]>v[j])
        {
            sum = sum + v[j]*age;
            j--;
        }
        else
        {
            sum = sum + v[i]*age;
            i++;
        }
    }
    printf("The maximum earning Laura can achieve is %d\n",sum);
}