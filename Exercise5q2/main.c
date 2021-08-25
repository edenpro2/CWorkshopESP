#include "Complex.c"
#include <stdio.h>

Complex getComplexNum()
{
	 int realOrComplex;
         printf("enter 0 for real or 1 for complex");  
         scanf("%d", &realOrComplex);
	 Complex temp;
	 if (!realOrComplex)
	 {
		printf("Enter real number");
		temp.imaginary = 0; 
		scanf("%d", temp.real);
		 
	 }
	 else 
	 {
	        scanf("%d%h", temp.real, temp.imaginary);  
	 }
             
         return temp;
}

void PrintComplex(Complex res)
{
	if (result.imaginary > 0)
	{
		printf("%d + i%h", result.real, result.imaginary);
	}
	else
	{
		printf("%d - i%h", result.real, (0 - result.imaginary));
	}        
}

void PrintComplexFraction(Complex_f fractionComplex)
{
	PrintComplex(fractionComplex.numerator);
	printf(" / ");
	PrintComplex(fractionComplex.denominator);
}

enum Operations
{
	ADD = 1, SUB, MULT, DIV, EXIT
};

int main()
{
	int input;
	Complex A, B;

	do
	{
		switch (input)
		{
                	A = getComplexNum();
			B = getComplexNum();
		case ADD:
			PrintComplex(ComplexAdd(A,B));
			break;
		case SUB:
			PrintComplex(ComplexSub(A,B));
			break;
		case MULT:
			PrintComplex(ComplexMult(A,B));
			break;
		case DIV:
			PrintComplexFraction(ComplexDiv(A,B));
			break;
	        case EXIT:
			break;
		default:
			printf("Number entered unrecognized");
		}

	} while (input != 5)

	return 0;

}
