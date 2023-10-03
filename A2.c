//2. Find the sum and average of different numbers which are accepted by user as many as user wants

#include<stdio.h>
void main()
{
 int n,i=0,sum=0;
 int avg;
 while(1)
 {
 	printf("Enter number n:");
   scanf("%d",&n);
   if(n==0)
   {
    	break;
	}
    sum=sum+n;i++;
    
 }
 avg=sum/i;
 printf("sum=%d",sum);
 printf("Avg=%d",avg);
    
}
