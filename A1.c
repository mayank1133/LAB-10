//1. Find out sum of first and last digit of a given number.

#include<stdio.h>
void main()
{
	int x,last,first,sum;
	printf("Enter the numder:");
	scanf("%d",&x);
	last=x%10;
	while(x>=10)
	{
		x=x/10;
	}
	first=x;
	sum=first+last;
	printf("sum=%d",sum);
}
