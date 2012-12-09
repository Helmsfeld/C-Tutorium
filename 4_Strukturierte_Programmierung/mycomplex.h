#ifndef _MYCOMPLEX_H_
#define _MYCOMPLEX_H_


typedef struct {
  double re; /* Realteil */
  double im; /* Imaginaerteil */
} m_complex;

m_complex new_m_complex(double re, double im); /* Make a new m_complex */

int m_equals(m_complex a, m_complex b); /* Equality */

m_complex m_add(m_complex, m_complex); /* Addition */

m_complex m_sub(m_complex, m_complex); /* Subtraktion */

m_complex m_mul(m_complex, m_complex); /* Multiplikation */

m_complex m_div(m_complex, m_complex); /* Division */

m_complex m_neg(m_complex); /* Negation */

m_complex m_abs(m_complex); /* Betrag */

m_complex m_inv(m_complex);

m_complex m_conj(m_complex);

#endif /* _MYCOMPLEX_H_ */


