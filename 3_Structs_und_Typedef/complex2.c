/* Eine Moeglichkeit, dennoch mit dem typ m_complex_p zu arbeiten besteht
 * darin, 
 * 1) entweder den Funktionen ein extra Argument fuer das Ergebnis zu
 *    spendieren oder
 * 2) mit malloc Speicher anzufordern und einen Pointer darauf zurueckzugeben.
 *    Dann hat allerdings der Aufrufer der entsprechenden Funktion die Pflicht,
 *    diesen Speicher wieder freizugeben.
 * Beide Varianten werden kurz demonstriert. */

#include <stdlib.h>
#include <stdio.h>

typedef double *m_complex_p;

void m_add_with_extra_argument(m_complex_p a, m_complex_p b, m_complex_p r)
{
    r[0] = a[0] + b[0];
    r[1] = a[1] + b[1];
}

m_complex_p m_add_with_malloc(m_complex_p a, m_complex_p b)
{
    m_complex_p r = (m_complex_p)malloc(2*sizeof(double));
    r[0] = a[0] + b[0];
    r[1] = a[1] + b[1];
    return r;
}

int main(void)
{
    m_complex_p a = (double[]){2.0, 3.0};
    m_complex_p b = (double[]){6.0, 1.0};
    m_complex_p c = b;
    m_complex_p r1 = (double[]){0.0, 0.0};
    m_complex_p r2;

    m_add_with_extra_argument(a, b, r1);
    printf("a+b = r1 = %f+%fi\n", r1[0], r1[1]);

    r2 = m_add_with_malloc(a, b);    
    printf("a+b = r2 = %f+%fi\n", r2[0], r2[1]);
    free(r2); /* Nicht vergessen, diesen Speicher wieder freizugeben! */

    printf("b = %f+%fi, c = %f+%fi\n", b[0], b[1], c[0], c[1]);
    c[0] = -100.0;
    puts("Anderung von c bewirkt nun auch aenderung von b!");
    printf("b = %f+%fi, c = %f+%fi\n", b[0], b[1], c[0], c[1]);

    return 0;
}
