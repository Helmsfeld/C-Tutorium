#include <stdio.h>
#include <stdlib.h>
#include "mycomplex.h"

int cmp1(const void *a, const void *b)
{
	return ((m_complex *)a)->re-((m_complex *)b)->re;
}

int cmp2(const void *a, const void *b)
{
	return m_abs(*(m_complex *)a).re - m_abs(*(m_complex *) b).re;
}

void printarray(m_complex *arr, size_t arrsize)
{
	putc('{', stdout);
	for (size_t i=0; i<arrsize; i++) {
		printf("%.2f%+.2fi", arr[i].re, arr[i].im);
		(i<arrsize-1) ? fputs(", ", stdout) : puts("}");
	}
}

int main(void)
{
    m_complex a[3];
    a[0] = (m_complex) {.re=10.0, .im=2.0};
    a[1] = (m_complex) {.re=-1.5, .im=-5};
    a[2] = (m_complex) {.re=7.5, .im=14};
    
    puts("Initiales Array:");
    printarray(a, 3);

    puts("\nSortiere mit cmp1:");
    qsort(a, 3, sizeof(m_complex), cmp1);
    printarray(a, 3);
    
    puts("\nSortiere mit cmp2:");
    qsort(a, 3, sizeof(m_complex), cmp2);
    printarray(a, 3);
    return 0;
}
