#include <stdio.h>

/* itoa: convert n to characters in s */
void itoa (int n, char s[]) {
    int i, sign;
    if ((sign = n) < 0) {
	n = -n;
    }
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) {
	s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}
