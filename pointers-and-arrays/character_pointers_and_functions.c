#include <stdio.h>

/* strcpy: copy t to s; array subscript version */
void strcpy(char *s, char *t) {
	int i;
	i = 0;

	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

/* strcmp: return <0 if s<t, 0 if s==t, >0 if d>t */
int strcmp(char *s, char *t) {
	int i;
	for (i = 0; s[i] == t[i]; i ++) {
		if (s[i] == '\0') {
			return 0;
		}
		return s[i] - t[i];
	}
}

/* pointer version */
/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp(char *s, char *t) {
	for (; *s == *t; s++, t++) {
		if (*s == '\0') {
			return 0;
		}
		return *s - *t;
	}
}