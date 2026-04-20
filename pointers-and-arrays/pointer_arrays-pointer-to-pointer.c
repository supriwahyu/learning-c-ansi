#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 5000	/* max #lines to be sorted */

char *lineptr[MAXLINES];	/* pointers to text lines */

int readlines(char *lineptr[], int nlines, int getline_new());
void writelines(char *lineptr[], int nlines);

void qsort_new (char *lineptr[], int left, int right);

/* sort input lines */
int main(int getline_new(), void qsort_new()) {
	int nlines;	/* number of input lines read */

	if ((nlines = readlines(lineptr, MAXLINES, getline_new)) >= 0 ) {
		qsort_new(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
	} else {
		printf("error: input too big to sort\n");
		return 1;
	}
}

#define MAXLEN 1000	/* max length of any input line */
int getline_new(char *, int);
// char *malloc(int);

/* readlinesL read input lines */
int readlines(char *lineptr[], int maxlines, int getline_new()) {
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = getline_new(line, MAXLEN)) > 0) {
		if (nlines >= maxlines || malloc(len) == NULL) {
			return -1;
		} else {
			line[len-1] = '\0';	/* delete newline */
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}

	return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines) {
	int i;

	for (i = 0; i < nlines; i++) {
		printf("%s\n", lineptr[i]);
	}
}