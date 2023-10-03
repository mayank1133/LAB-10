//3. Find whether the given number is prime or not.

#include<stdio.h>
void main()
{
	int n,i=1,count=0;
	printf("Enter number n:");
    scanf("%d",&n);
    while(i<=n)
    {
    	if(n%i==0)
    	{
    		count=count+1;
		}
		i++;
	}
	if(count==2)
	{
		printf("IT IS PRIME NUMBER");
	}
	else
	{
		printf("it is not prime number");
	}
}
