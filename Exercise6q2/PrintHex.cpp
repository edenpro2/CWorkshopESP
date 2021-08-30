//Write a function that takes a variable’s address and its size in bytes, then prints the hexadecimal representation of that variable from that address forward (similar to Visual Studio’s memory view).
//Example 1:
//char c = 'A'; /* ASCII value 65 */
//PrintHex(&c, sizeof(c));
//Will print:
//41
//
//Example 2:
//int i = 0x11223344;
//PrintHex(&i, sizeof(i));
//Will print:
//11
//22
//33
//44
//(or will it?)

#include "PrintHex.h"
#include <stdlib.h>
#include <stdio.h>

void PrintHex(int *address, int sizeofType)
{
	if (address)
	{
		char *buffer = (char *) malloc(sizeofType);
		char *output = (char *) malloc(sizeofType);

		*buffer = *(address);
		int decimal = *buffer;
		int i = 0, remainder;

	
		while (decimal != 0) {
		
			remainder = 0;
			
			remainder = decimal % 16;

			// check if temp < 10
			if (remainder < 10) {
				output[i] = remainder + 48;
				i++;
			}
			else {
				output[i] = remainder + 55;
				i++;
			}

			decimal /= 16;
		}

		printf("0x");

		// printing hexadecimal number array in reverse order
		for (int j = i - 1; j >= 0; j--)
		{
			printf("%d", output[j];
		}
		
	}
	else
	{
		printf("0\n");
	}
}

int main(void)
{
	int input;
	printf("Insert a number:  \n");
	scanf_s("%d", &input);

	int *ptr = &input;
	PrintHex(ptr, sizeof(ptr));

}