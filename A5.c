#include <stdio.h>

int main() 
{
    int x, reversedNumber = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &x);
    int temp = x;
    while (temp > 0)
    {
        rem = temp % 10;
        reversedNumber = reversedNumber * 10 + rem;
        temp /= 10;
    }
    printf("%d",reversedNumber);
}