/* Berechnung der Fibonacce-Funktionen, rekursive Variante.
 * Author: Stefan Schuster
 * Date:   2012-12-09 */
#include <stdio.h>

int fib(int n) {
    if (n<=0) return 0;
    if (n==1) return 1;
    return fib(n-1) + fib(n-2);
}

int main(void) {
    char buf[100];
    while (fgets(buf, sizeof(buf), stdin) != NULL) {
        int n;
        int rd = sscanf(buf, "%d", &n);
        if (rd == 1) {
            int r = fib(n);
            printf("fib(%d) = %d\n", n, r);
        } else {
            puts("Error: Please provide an integer.");
        }
    }
    return 0;
}
