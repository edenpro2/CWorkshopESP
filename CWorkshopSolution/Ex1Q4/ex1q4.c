/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #4
	Description: The program will print a diamond made out of stars according to the input from user
	________________________________________________________________________________________________
*/

#include "StarDiamond.h"

void StarDiamond(int number)
{
	bool toStop = false;

	if (number < 0)
	{
		printf("Negative number entered");
		toStop = true;
	}
	else if (number % 2 == 0)
	{
		printf("Number is not odd");
		toStop = true;
	}

	if (toStop)
	{
		return;
	}

	int spaces = number / 2;
	int stars = -1;

	printf("\n");

	for (int i = 0; i < number; i++)
	{
		if (i <= number / 2)
		{
			stars += 2;

			for (int spaceIndex = 0; spaceIndex < spaces; spaceIndex++)
			{
				printf("%c", ' ');
			}
			for (int starIndex = 0; starIndex < stars; starIndex++)
			{
				printf("%c", '*');
			}
			printf("\n");

			spaces--;

		}
		else
		{
			if (i == number / 2 + 1)
			{
				spaces++;
			}
			stars -= 2;
			spaces++;

			for (int spaceIndex = 0; spaceIndex < spaces; spaceIndex++)
			{
				printf("%c", ' ');
			}
			for (int starIndex = 0; starIndex < stars; starIndex++)
			{
				printf("%c", '*');
			}
			printf("\n");

		}
	}
}