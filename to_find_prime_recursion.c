/******************************************************************************
 to find if a number is prime or not using recursion.
*******************************************************************************/

#include <stdio.h>

int main()
{
int n,m;
printf("Enter a number");
scanf("%d",&n);

m=is_prime(n,n/2);
if(m==1)
{
    printf("Number is a prime number");
}
else
printf("Number is not a prime number");
    return 0;
}
int is_prime(int n,int c)
{
    if(c==1)
    {
        return 1;
    }
    else
    if(n%c==0)
    {
        return 0;
    }
    else
    is_prime(n,c-1);
}