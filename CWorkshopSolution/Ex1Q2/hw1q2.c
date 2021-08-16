/*  ________________________________________________________________________________________________
	Name: Eden Amiga
	Class: Advanced C
	Lecturer: Asaf Tzur-El
	Assignment #1 Question #2
	Description: The program will print the lower case input of user in uppercase, unless it is q or Q
	________________________________________________________________________________________________
*/


void PrintCharUpperCase()
{
	char letter;

	printf("Enter a character to convert to: ");
	scanf("%c", &letter);

	if ((letter == 'q') || (letter == 'Q') || (letter < 'a') || (letter > 'z'))
	{
		exit(0);
	}
	else
	{
		letter -= 32;
		printf("%c", letter);
	}
}
