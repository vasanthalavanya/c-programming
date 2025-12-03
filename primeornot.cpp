//primr or not
#include<stdio.h>
int main()
{
	int number,factor,i;
	printf("enter a number:");
	scanf("%d",&number);
	factor = 0;
	for(i=1;i<=number;i++)
	if(number%i==0)
	{
		factor = factor +1;
	}
	if(factor >2)
	{
		printf("not prime");
	}
	else
	{
		printf("prime");
	}
	return 0;
}
