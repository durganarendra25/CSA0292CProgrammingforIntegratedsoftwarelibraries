#include<stdio.h>
int main()
{
char n1[]="RAM";
char *p1;
int i,n,c=0;
p1=n1;
while(*p1!='\0')
{
c++;p1++;
}
printf("length = %d",c);
return 0;
}