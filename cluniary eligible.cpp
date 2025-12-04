//culinary Eligibility
#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if((y*100)/x>75)
	{
		printf("ELIGIBLE");
	}
	else
	{
		printf("NOT ELIGIBLE");
	}
}
