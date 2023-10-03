#include<stdio.h>
void main()
{
    int n,i=1,count=0;
    printf("enter number n:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        printf("it is prime number");
    }
    else 
    {
        printf("it is not prime number");
    }
}