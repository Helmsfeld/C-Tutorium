/* Dieses Programm wird in der Regel nicht funktionieren,
 * siehe Funktion blah() */
#include <stdio.h>

typedef double * m_complex_p;

double g_re = 1.0;
double g_im = 2.0;

/* Jeder Aufruf dieser Funkion veraendert die globalen Variablen g_re und g_im. */
m_complex_p blah() {
    /* Problem: Arrays, die wie folgt deklariert werden
     * werden auf dem Stack gespeichert. 
     * Der retournierte Pointer verweist somit auf ungueltigen Speicher. 
     * Es gibt keine Garantie, was in den ensprechenden Speicherbereichen
     * steht.
     */
    m_complex_p r = (double[]) {g_re,g_im};
    g_re += 1.0;
    g_im += 3.0;
    return r;
}

m_complex_p kaputt_add(m_complex_p a, m_complex_p b)
{
    printf("Addiere: a=%f+%fi und b=%f+%fi\n", a[0], a[1], b[0], b[1]);
    m_complex_p r = (double[]) {a[0]+b[0], a[1]+b[1]};
    printf("Habe: a+b = %f+%fi\n", r[0], r[1]);
    return r;
}

int main(int argc, const char * argv[])
{
    printf("g_re=%f, g_im=%f\n", g_re, g_im);
    m_complex_p a = blah(); /* a={2.0,5.0} */
    printf("g_re=%f, g_im=%f\n", g_re, g_im);
    m_complex_p b = blah(); /* a={3.0,8.0} */
    printf("g_re=%f, g_im=%f\n", g_re, g_im);

    printf("Erwarte: a = %f+%fi, b= %f+%fi\n", 2.0, 5.0, 3.0, 8.0);
    printf("Habe:    a = %f+%fi, b= %f+%fi\n", a[0], a[1], b[0], b[1]);

    a = (double[]) {2.0,3.0};
    b = (double[]) {4.0,5.0};
    a = kaputt_add(a,b);
    puts("Nach kaputt_add(a, b):");
    printf("Habe:    a = %f+%fi\n", a[0], a[1]);

    return 0;
}

