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

	printf("Enter a character: ");
	scanf("%c", &letter);

	if ((letter == 'q') || (letter == 'Q'))
	{
		exit(0);
	}
	else if (letter >= 'a' && letter <= 'z')
	{
		letter -= 32;
		printf("%c", letter);
	}
	else
	{
		printf("%c", letter);
	}
}