#include<stdio.h>
int main()
{
	int array[100],pos,c,n;
	printf("enter no of elements:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("enter the position:\n");
	scanf("%d",&pos);
	if(pos>=n+1)
	printf("deletion not possible\n");
	else
	{
		for(c=pos-1;c<n-1;c++)
		array[c]=array[c+1];
		printf("resultant array is:\n");
		for(c=0;c<n-1;c++)
		printf("%d\n",array[c]);
	}
	return 0;
}