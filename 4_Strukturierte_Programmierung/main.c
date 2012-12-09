#include <assert.h>
#include <stdio.h>
#include "mycomplex.h"

int main(void)
{
    m_complex a = new_m_complex(3.0, 4.0);
    m_complex b = new_m_complex(4.0, 3.0);
    m_complex c = b;
    m_complex a_add_b = new_m_complex(7.0, 7.0);
    m_complex a_sub_b = new_m_complex(-1.0, 1.0);
    m_complex a_mul_b = new_m_complex(0, 25.0);
    m_complex a_div_b = new_m_complex(0.96, 0.28);
    m_complex a_abs   = new_m_complex(5.0, 0);
    m_complex a_neg   = new_m_complex(-3.0, -4.0);

    assert(m_equals(m_add(a, b), a_add_b));
    assert(m_equals(m_sub(a, b), a_sub_b));
    assert(m_equals(m_mul(a, b), a_mul_b));
    assert(m_equals(m_div(a, b), a_div_b));
    assert(m_equals(m_abs(a), a_abs));
    assert(m_equals(m_neg(a), a_neg));

    /* Aenderungen an c bewirken keine Aenderungen an b.
     * b.re == c.re */
    assert(m_equals(b, c));
    c.re = -100;
    /* b.re != c.re */
    assert(!m_equals(b, c));

    printf("Done.\n");

    return 0;
}

