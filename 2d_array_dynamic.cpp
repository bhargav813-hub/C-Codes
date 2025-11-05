//wap a program 2d array and display it.
#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	printf("Enter size of the matrix:");
	scanf("%d%d",&m,&n);
	printf("\n Enter the elements into matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Index is [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Array the elements into matrix:");
	for(i=0;i<m;i++)
	{		
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
		
}
