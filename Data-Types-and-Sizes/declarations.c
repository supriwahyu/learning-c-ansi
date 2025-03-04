/* all variables must be declared before use. */

/* example */

int lower, upper, step;
char c, line[1000];

/* variables can be distributed among declarations in any fashion; the lists above could well be written as */

int lower;
int upper;
int step;
char c;
char line[1000];

/* a variable may also be initialized in its declaration. if the name is followed by an equals sign and an expression, the expression serves as an initializer, as in. */

char esc = '\\';
int i = 0;
int limit = MAXLINE+1;
float eps = 1.0e-5;

/* the qualifier const can be applied to the declaration of any variable to specify that its value will not be changed. for an array, the const qualifier says that elements will not be altered. */

const double e = 2.71828182845905;
const char msg[] = "warning: ";

/* the const declaration can also be used with array arguments, to indicate that the function does not change that array: */

int strlen(const char[]);


