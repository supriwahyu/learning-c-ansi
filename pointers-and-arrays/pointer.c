int main() {
    int x = 1, y =2, z[10];
    int *ip;	/* ip is pointer to int */
    ip = &x;	/* ip now points to x */
    y = *ip;	/* y is now 1 */
    *ip = 0;	/* x is now 0 */
    ip = &z[0];	/* ip is now point to z[0] */

    *ip = *ip + 10; /* increments *ip by 10 */
    y = *ip + 1;
    *ip += 1;
    ++*ip /* increments what ip points to, as do and */
    (*ip)++
}
