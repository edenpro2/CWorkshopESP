/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #5
	Description: The program checks if the entered Israeli ID is valid or not
	________________________________________________________________________________________________
*/


#include "CheckID.h"


bool CheckID(int number)
{
	int idTemp = number, idLength = 0;
	while (idTemp != 0)
	{
		idTemp /= 10;
		idLength++;
	}
	if (idLength != 9)
	{
		printf("Invalid ID entered");
		return false;
	}

	int id[9]; idTemp = number;
	for (int index = 8; index >= 0; index--)
	{
		id[index] = idTemp % 10;
		idTemp /= 10;
	}

	int sum = 0;
	for (int index = 0; index < 9; index++)
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

	// if a product of 10, the Luhn algorithm states it is valid
	if (sum % 10 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}