#include "Complex.c"
#include <stdio.h>

Complex getComplexNum()
{
         printf("enter 0 for real or 1 for complex");  
            
         Complex temp
         printf("Enter complex number");
         Complex temp;
         scanf("%d%h", temp.real, temp.imaginary);   
         return temp;
}

enum Operations
{
	ADD = 1, SUB, MULT, DIV, EXIT
};

int main()
{
	int input;

	do
	{
		switch (input)
		{
                case EXIT:
			break;

		case ADD:
                     
                        break;
		case SUB:
			break;
		case MULT:
			break;
		case DIV:
			break;
		
		default:
			printf("Number entered unrecognized");
		}

	} while (input != 5)


}
