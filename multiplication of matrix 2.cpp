#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],mul[20][20],r,c,i,j,k;
	printf("enter the number of rows :");
	scanf("%d",&r);
	printf("enter the number of coloums :");
	scanf("%d",&c);
	printf("enter the first matrix element =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix element =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&b[i][j]);
       	}
	}
	printf("multiplication of matrix");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
 