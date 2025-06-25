#include <stdio.h>


int main () {
    int v[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(v) / sizeof(v[0]);
    int x = 7;
    int result = binsearch(x, v, n);
    printf("Found %d at index %d\n", x, result);
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
	mid = (low+high)/2;
	if (x < v[mid]) {
	    high = mid + 1;
	} else if (x > v[mid]) {
	    low = mid + 1;
	} else {
	    return mid;
	}
    }
    return -1;
}
