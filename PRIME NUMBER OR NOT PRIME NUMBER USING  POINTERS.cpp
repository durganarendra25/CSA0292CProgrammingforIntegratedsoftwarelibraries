#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,c,*x,*nm,*fc;
    x=&i;
    nm=&n;
    fc=&c;
    *fc=0;

    printf("Enter a number ");
    scanf("%d",nm);

    for(*x=1; *x<=*nm; *x=*x+1)
    {
        if(*nm % *x==0)
        {
            *fc=*fc+1;		
        }
    }

    if(*fc==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;
}