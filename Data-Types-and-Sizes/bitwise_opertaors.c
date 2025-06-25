#include <stdio.h>

main() {
	/* sets to zeroallbut the low-order 7 bits of n */
	// n = n & 01777;

	/* sets the one in x the bits that are set to one in SET_ON. */
	// x = x | SET_ON;

	printf("%c\n", getbits(1, 4, 3));
}

/* getbits: get n bits from position p */
int getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n) & ~(~0 << n));
}

