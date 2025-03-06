/* More interesting are the logical operators && and ||. Expressions connected by && or || are evaluated left to right, and evaluation stops as soon as the truth or falsehood of the result is known. Most C programs rely on these propperties. For example, here is a loop from the input function getline. */

for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
    s[i] = c;
}
