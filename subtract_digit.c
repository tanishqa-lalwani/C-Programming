/***************************************

to subtract each digit from a number 
eg. 8091
ans 7080
(0 is replaced with 9)
*******************************************************************************/

#include<stdio.h>
int main()
{
	int n,d,sum=0,i=1,sub;
	printf("Enter a number");
	scanf("%d",&n);
	
	while(n>0)
	{
		d=n%10;
		
		if(d==0)
		{
			sub=9;
		}
		else
		{
		
		sub=d-1;
	}
		sum=sum+sub*i;
		i=i*10;
		n=n/10;	
	}
	
	
printf("The number obtained is %d",sum);
return 0;
}