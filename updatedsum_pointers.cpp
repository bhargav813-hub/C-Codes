// wap to print sum in pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum;
	printf("enter a and b value:");
	scanf("%d %d",&a,&b);
	int*p;
	int *q;
	q=&b;
	p=&a;
	printf("sum is %d",sum=*p+*q);
	printf("%x",p);
    p++;
	printf("\nupdated p is :%x",p);
	printf("\nadress of p%x",&p);
	printf("\nadress of q%x",&q);
	if(p==q)
	printf("\nEqual");
	else
	printf("\nNot Equal");
}
