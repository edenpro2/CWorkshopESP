#ifndef _COMPLEX_H_
#define _COMPLEX_H_



typedef struct Complex
{
	int real;
	short imaginary;

} Complex;


struct Complex ComplexAdd(struct Complex a, struct Complex b);

struct Complex ComplexSub(struct Complex a, struct Complex b);

struct Complex ComplexMult(struct Complex a, struct Complex b);


typedef struct Complex_f
{
	struct Complex numerator;
	struct Complex denominator;

} Complex_f;


Complex_f ComplexFractionAdd(Complex_f a, Complex_f b);

Complex_f ComplexFractionSub(Complex_f a, Complex_f b);

Complex_f ComplexFractionMult(Complex_f a, Complex_f b);

Complex_f ComplexDiv(struct Complex a, struct Complex b);

struct Complex Conjugate(struct Complex z);

#endif