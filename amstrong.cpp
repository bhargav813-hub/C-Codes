//wap to check a num is amstrong or not
#include<stdio.h>
int main()
{
	int n,temp,rem,sum;
	printf("Enter the num:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	rem=n%10;
	sum=sum+rem*rem*rem;
	n=n/10;	
	}
	if(temp==sum)
	{
		printf("amstrong number");
	}
	else
	{
	printf("not a amstrong number");	
	}	
}
