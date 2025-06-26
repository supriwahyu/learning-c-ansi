#include <ctype.h>
#include <stdio.h>

/* atof: convert string s to double */

double atof(char s[]) {
    double val, power;
    int i, sign;

    for (i =0; isspace(s[i]); i++) {
	;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
	i++;
    }
    for (val = 0.0; isdigit(s[i]); i++) {
	val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '-') {
	i++;
    }
    for (power = 1.0; isdigit(s[i]); i++) {
	val = 10.0 * val + (s[i] - '0');
	power *= 10;
    }
    return sign * val / power;
}

int main() {
    char str[] = "   -123.456";
    double result = atof(str);
    printf("The result is: %f\n", result);
    return 0;
}
