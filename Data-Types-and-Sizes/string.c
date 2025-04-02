#include <string.h>
#include <stdio.h>

main() {
    printf("%i\n", strlen("this is test"));
}

/* strlen: return length of s */
int strlens(char s[]) {
    int i;

    while (s[i] != '\0') {
        ++i;
	return i;
    }
}
