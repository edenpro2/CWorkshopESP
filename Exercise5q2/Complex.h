#ifndef _COMPLEX_H_
#define _COMPLEX_H_


typedef struct Complex Complex;

typedef struct
{
	int real;
	short imaginary;

} Complex;

struct Complex ComplexAdd(Complex a, Complex b);

Complex ComplexSub(Complex a, Complex b);

Complex ComplexMult(Complex a, Complex b);


typedef struct Complex_f
{
	struct Complex numerator;
	struct Complex denominator;

} Complex_f;


Complex_f ComplexFractionAdd(Complex_f a, Complex_f b);

Complex_f ComplexFractionSub(Complex_f a, Complex_f b);

Complex_f ComplexFractionMult(Complex_f a, Complex_f b);

Complex_f ComplexDiv(Complex a, Complex b);

Complex Conjugate(Complex z);

#endif