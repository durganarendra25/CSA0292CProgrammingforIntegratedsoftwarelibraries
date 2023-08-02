#include <stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    
    int evenNumCount = 0, oddNumCount = 0;
    int i; 
    const int N = ARRAY_SIZE(arr);
    for( i = 0; i < N; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenNumCount++;
        }
        else
        {
            oddNumCount++;
        }
    }
    printf("Even elements = %d\n", evenNumCount);
    printf("Odd elements = %d", oddNumCount);
    return 0;
}