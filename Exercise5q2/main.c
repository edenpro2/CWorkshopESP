#include "Complex.c"
#include <stdio.h>


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
		case ADD:

			break;
		case SUB:
			break;
		case MULT:
			break;
		case DIV:
			break;
		case EXIT:
			break;
		default:
			printf("Number entered unrecognized");
		}

	} while (input != 5)


}