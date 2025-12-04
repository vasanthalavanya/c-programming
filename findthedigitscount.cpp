//Find the digits count
#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	while (n!=0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
}
