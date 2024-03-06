#include<stdio.h>
#include<stdlib.h>

int otp(void)
{
	unsigned int i, otp;
	printf("%p\n",&i);
	srand((long long int)&i);
	otp = rand()%(9999-1000)+1000;
	return otp;
}

int main()
{
	int otp_n = otp();
   	printf("%d ", otp_n); 
}