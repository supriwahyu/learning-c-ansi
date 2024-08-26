/* Technically, a string constant is an array of characters */

/* strlen: return length of s */
int strlen(char s[]) {
    int i;

    while(s[i] != '\0') {
        ++i;
    }
    return 0;
}
