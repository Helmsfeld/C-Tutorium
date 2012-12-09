/* Berechnung der Fibonacce-Funktionen, iterative Variante.
 *
 * Wie man bei fib2 sehen kann, waechst die Anzahl der rekursiven
 * Aufrufe der Funktion fib zur Berechnung der n-ten Fibonacci-Zahl
 * exponentiell, eine effizientere Alternative ist hier die
 * iterative Berechnung.
 *
 * Author: Stefan Schuster
 * Date:   2012-12-09 */
#include <stdio.h>

int fib(int n) {
    int i, a = 0;
    int b = 1;
    if (n<=0) return 0;
    if (n==1) return 1;
    /* Da die Faelle n=0 und n=1 abgedeckt sind, benoetigen wir
     * fuer n>2 gerade einmal n-1 Iterationen. */
    for (i=1; i<n; i++) {
        int sum = a+b;
        a = b;
        b = sum;
    }
    return b;
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
