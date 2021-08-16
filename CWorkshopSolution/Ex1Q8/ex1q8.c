/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #8
	Description: Returns the minimum and maximum value of entered numbers
	________________________________________________________________________________________________
*/

#include "MinAndMax.h"

int main()
{
	MinAndMax();
	return 0;
}

void MinAndMax()
{
	int input;
	scanf("%d", &input);
	int min = input, max = input;

	while (true)
	{
		scanf("%d", &input);
		if (input == 0)
		{
			break;
		}
		else if (input > max)
		{
			max = input;
		}
		else if (input < min)
		{
			min = input;
		}
	}

	printf("max: %d and min: %d", max, min);

}