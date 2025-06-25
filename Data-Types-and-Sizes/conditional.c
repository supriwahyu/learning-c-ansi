#include <stdio.h>

int main() {
    int i, n = 9;
    int a[10] = {1,2,3,4,5,6,7,8,9};
    for (i = 0; i < n; i++) {
	printf("%6d%c", a[i], (i%10==9 || i==n-1) ? '\n' :' ');
    }
}
