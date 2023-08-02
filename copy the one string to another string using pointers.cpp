#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int b[10];
	int *p1;
	int *p2;
	int n,i;
	p1=a;
	p2=b;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	 {
	 	*p2=*p1;
	 	p1++;
	 	p2++;
	 }
	for(i=0;i<n;i++)
	  printf("%d\n",b[i]);
	return 0;
}