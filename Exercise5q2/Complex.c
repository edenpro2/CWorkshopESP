#include "Complex.h"


Complex ComplexAdd(Complex a, Complex b)
{
	Complex result = { .real = a.real + b.real , .imaginary = a.imaginary + b.imaginary };
	return result;
}

Complex ComplexSub(Complex a, Complex b)
{
	Complex result = { .real = a.real - b.real, .imaginary = a.imaginary - b.imaginary };
	return result;
}

Complex ComplexMult(Complex a, Complex b)
{
	Complex result = 
	{ 
	  .real = a.real * b.real - a.imaginary * b.imaginary, 
	  .imaginary = a.real * b.imaginary + b.real * a.imaginary 
	};
	return result;
}

Complex_f ComplexDiv(Complex a, Complex b)
{
	Complex conjugate = Conjugate(b);

	/* FOIL with Conjugate */
	Complex_f result =
	{
		result.numerator.real = a.real * conjugate.real - a.imaginary * conjugate.imaginary,
		result.numerator.imaginary = a.real * conjugate.imaginary + conjugate.real * a.imaginary,
		result.denominator.real = b.real * conjugate.real - b.imaginary * conjugate.imaginary,
		result.denominator.imaginary = b.real * conjugate.imaginary + conjugate.real * b.imaginary
	};
	
	return result;
}

Complex_f ComplexFractionAdd(Complex_f a, Complex_f b)
{
	Complex_f result =
	{
		result.numerator =
		ComplexAdd(ComplexMult(a.numerator, b.denominator) , ComplexMult(b.numerator, a.denominator)),

		result.denominator =
		ComplexMult(a.denominator, b.denominator)
	};

	return result;
}

Complex_f ComplexFractionSub(Complex_f a, Complex_f b)
{
	Complex_f result =
	{
		result.numerator =
		ComplexSub(ComplexMult(a.numerator, b.denominator) , ComplexMult(b.numerator, a.denominator)),

		result.denominator =
		ComplexMult(a.denominator, b.denominator)
	};

	return result;
}

Complex_f ComplexFractionMult(Complex_f a, Complex_f b)
{
	Complex_f result =
	{
		result.numerator = ComplexMult(a.numerator, b.numerator),
		result.denominator = ComplexMult(a.denominator, b.denominator)
	};

	return result;
}

C
Complex Conjugate(Complex z)
{
	z.imaginary = (0 - z.imaginary);
}