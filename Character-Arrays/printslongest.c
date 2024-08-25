#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length. */

int getlinetwo(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main() {
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while((len = getlinetwo(line, MAXLINE)) > 0) {
        if(len > max) {
	    max = len;
	    copy(longest, line);
	}
        printf("%s", longest);
	return 0;
    }
}

/* getline: read a line into s, return length */
int getlinetwo(char s[], int lim) {
    int i;
    char c;

    for(i = 0;i < lim-1 && (c = getchar()) != EOF; ++i) {
	s[i] = c;
	if(c == ' ') {
	    ++i;
	}
	if(c == '\n') {
            return i;
	}
    }
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while((to[i] = from[i]) != EOF) {
        ++i;
    }
}

/* because i use gcc and terminal to run this code, it not return as i want it, so i modified line-to-space or tab, still i have no  idea. */
