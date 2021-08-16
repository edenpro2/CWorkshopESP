/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #1
	Description: The program will allow user to enter character and will print it if it isn't Q or q
	________________________________________________________________________________________________
*/

#define _CRT_SECURE_NO_WARNINGS
#include "printChar.h"


void printChar()
{
	char letter;

	printf("Enter a character (will not print q): ");
	scanf("%c", &letter);

	if ((letter == 'q') || (letter == 'Q'))
	{
		exit(0);
	}
	else
	{
		printf("%c", letter);
	}
}
