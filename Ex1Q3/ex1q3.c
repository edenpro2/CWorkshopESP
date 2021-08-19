/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #3
	Description: The program will return the size of a given C-style array
	________________________________________________________________________________________________
*/

#include "StringLength.h"

size_t StringLength(const char* string)
{
	size_t i = 0;
	while (string[i] != '\0')
	{
		i++;
	}

	return i;
}