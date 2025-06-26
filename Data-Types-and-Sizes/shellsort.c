#include <stdio.h>

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellshort (int v[], int n) {
    int gap, i, j, temp;
    for (gap = n/2; gap > 0; gap /= 2) {
	for (i = gap; i < n; i++) {
	    for (j=i-gap; j >= 0 && v[j]>v[j+gap]; j -=gap) {
		temp = v[j];
		v[j] = v[j+gap];
		v[j+gap] = temp;
	    }
	}
    }
}

/* function to print the array */
void printArray (int v[], int n) {
    for (int i = 0; i < n; i++) {
	printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {23, 12, 1, 8, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting:\n");
    printArray(arr, n);
    shellshort(arr, n);

    printf("After sorting:\n");
    printArray(arr, n);

    return 0;
}
