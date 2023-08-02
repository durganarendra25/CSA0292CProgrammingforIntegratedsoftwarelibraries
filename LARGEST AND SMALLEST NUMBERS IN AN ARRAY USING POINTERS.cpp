#include <stdio.h>

void findLargestAndSmallest(int *arr, int size, int *largest, int *smallest) {
	
    *largest = *smallest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *largest) {
            *largest = *(arr + i);
        }
        if (*(arr + i) < *smallest) {
            *smallest = *(arr + i);
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, smallest;
    findLargestAndSmallest(arr, size, &largest, &smallest);

    printf("The largest element in the array is: %d\n", largest);
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}
