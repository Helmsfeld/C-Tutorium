#include <math.h>
#include "mycomplex.h"

m_complex new_m_complex(double re, double im)
{
    return (m_complex) {re, im};
}

int m_equals(m_complex a, m_complex b)
{
    return (a.re == b.re) && (a.im == b.im);
}

m_complex m_add(m_complex a, m_complex b)
{
    return (m_complex) {a.re+b.re, a.im+b.im};
}

m_complex m_sub(m_complex a, m_complex b)
{
    return (m_complex) {a.re-b.re, a.im-b.im};
}

m_complex m_mul(m_complex a, m_complex b)
{
    m_complex r;
    r.re = a.re*b.re - a.im*b.im;
    r.im = a.re*b.im + a.im*b.re;
    return r;
}

m_complex m_div(m_complex a, m_complex b)
{
    return m_mul(a, m_inv(b));
}

m_complex m_neg(m_complex a)
{
    a.re = -a.re;
    a.im = -a.im;
    return a;
}

m_complex m_abs(m_complex a)
{
    return (m_complex){sqrt(a.re*a.re + a.im*a.im), 0};
}

m_complex m_inv(m_complex a)
{
    m_complex r = m_conj(a);
    r.re = r.re/(m_abs(a).re*m_abs(a).re);
    r.im = r.im/(m_abs(a).re*m_abs(a).re);
    return r;
}

m_complex m_conj(m_complex a)
{
    a.im = -a.im;
    return a;
}
