/******************************************************************************
Author : tanishqa
Date : 19th October 2018
Question : Given a,b int find a^b
Example input
2
3

output 8

*******************************************************************************/

#include <stdio.h>
long power_func(int base, int exponent);
int main()

{
  
    
    int a;
    scanf("%d",&a);

    int b;
    scanf("%d",&b);

    long result=power_func(a,b);
    
    printf("%lld",result);
    
    return 0;
    
}
    long power_func(int base, int exponent)
    {
    
    int i,power=1;
    for(i=0;i<exponent;i++)
    {
        power=power*base;
    }
    return power;
    
    }


