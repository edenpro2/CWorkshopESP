/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #6
	Description: The program returns the correct check digit for a given ID with 8 digits
	________________________________________________________________________________________________
*/


#include "AddCheckDigit.h"

int AddCheckDigit(int number)
{
	int idTemp = number, idLength = 0;
	while (idTemp != 0)
	{
		idTemp /= 10;
		idLength++;
	}
	if (idLength != 8)
	{
		printf("Entered number with more or less digits than 8");
		return;
	}

	int id[8]; idTemp = number;
	for (int index = 7; index >= 0; index--)
	{
		id[index] = idTemp % 10;
		idTemp /= 10;
	}

	int sum = 0;
	for (int index = 0; index < 8; index++)
	{
		// only when index is odd, multiply value by 2
		if (index % 2 == 1)
		{
			id[index] *= 2;
			if (id[index] >= 10)
			{
				id[index] -= 9;
			}
		}
		sum += id[index];
	}

	return 10 - (sum % 10);
}