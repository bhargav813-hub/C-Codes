// wap  to implement bubble sort algorthim
#include<stdio.h>
int main()
{
	int a[10],i,n,temp,j;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    // bubble sort
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-i;j++)
    	{
    		
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
