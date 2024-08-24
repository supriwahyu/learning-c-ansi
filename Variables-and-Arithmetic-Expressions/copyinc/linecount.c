#include <stdio.h>

/* count lines in input */
main() {
    int c, nl;

    /* A character written between single quotes represents an integer value equal to the numerical
value of the character in the machine's character set. This is called a character constant,
although it is just another way to write a small integer. So, for example, 'A' is a character
constant; in the ASCII character set its value is 65, the internal representation of the character
A. Of course, 'A' is to be preferred over 65: its meaning is obvious, and it is independent of a
particular character set. */
    nl = 0;
    while((c = getchar()) != EOF) {
	if(c == '\n') {
	    ++nl;
	}
        printf("%d\n", nl);
    }
}
