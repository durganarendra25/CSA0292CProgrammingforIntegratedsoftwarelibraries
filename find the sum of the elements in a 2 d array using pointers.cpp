#include<stdio.h>
int main()
{
	int a[]={10,20,30,40};
	int n,i,sum=0;
	int *p;
	p=a;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
	sum=sum+*p;
	   p++;
	}
	printf("sum= %d",sum);
	return 0;   
}