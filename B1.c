#include <stdio.h>

int main() 
{
    int n,sum=0,i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i<n)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum==n)
    {
        printf("NUMBER IS PERFECT");
    }
    else
    {
        printf("NUMBER IS NOT PERFECT");
    }
}