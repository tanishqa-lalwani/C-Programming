/******************************************************************************

             Reverse number using Recursion
*******************************************************************************/

#include<stdio.h>
int is_reverse(int x,int l,int sum)
{
    int r;
    r=x%10;
    if(l==0)
       return sum;
    else
    {  
       sum=sum*10+r;
       return is_reverse(x/10,l-1,sum);
    }
}
int main()
{
    int n,d,a,l=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
	l++;
	n=n/10;
    }
    d=is_reverse(a,l,0);
    printf("Reverse of number is %d",d);
    return 0;
}
