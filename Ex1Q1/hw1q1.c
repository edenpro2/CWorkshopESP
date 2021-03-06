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
#include <stdlib.h>
#include <stdio.h>

void printChar()
{
	char letter;

	printf("Enter a character (will not print q): ");
	scanf_s("%c", &letter, 1);

	if (((letter >= 'a') && (letter <= 'z') || ((letter >= 'A') && (letter <= 'Z'))) && (letter != 'q') && (letter != 'Q'))
	{
		printf("%c", letter);
	}
	else
	{
		exit(0);
	}
}

int main()
{
	printChar();
}