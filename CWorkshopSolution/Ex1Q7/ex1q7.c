/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #7
	Description: Reverses the order of the input number using recursion
	________________________________________________________________________________________________
*/

#include "PrintReverse.h"
 
void PrintReverse()
{
	int input;

	scanf("%d", &input);
	if (input == 0)
	{
		return;
	}
	PrintReverse();
	printf("%d ", input);

}