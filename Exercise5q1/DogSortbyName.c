#include "DogSortbyName.h"
#include <string.h>
#include <stdio.h>
#include <cstddef>

void DogSortbyName(Dog *dogArray, int size)
{
	if (!dogArray)
	{
		return;
	}

	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < (size - 1 - i); ++j)
		{
			Dog *firstDogPtr = (dogArray + j);
			Dog *secondDogPtr = (dogArray + j + 1);

			if (strcmp(firstDogPtr->name, secondDogPtr->name) > 0)
			{
				DogSwap(firstDogPtr, secondDogPtr);
			}
		}
	}
}

void DogSortbyWeight(Dog* dogArray, int size)
{
	if (!dogArray)
	{
		return;
	}

	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < (size - 1 - i); ++j)
		{
			Dog* firstDogPtr = (dogArray + j);
			Dog* secondDogPtr = (dogArray + j + 1);

			if ((firstDogPtr->weight) > (secondDogPtr->weight))
			{
				DogSwap(firstDogPtr, secondDogPtr);
			}
		}
	}
}

void DogSwap(Dog *first, Dog *second)
{
	Dog *dogTemp = &first;
	first = &second;
	second = &dogTemp;

}

int main(void)
{
	char strInput[NAMELENGTH];
	ushort size;

	/* Getting input from user */
	do
	{
		printf("Enter number of dogs to enter: ");
		scanf("%hu", &size);

		if (size < 1)
		{
			printf("Number entered not valid.");
		}

	} while (size < 1);


	/* Create the intial array */
	Dog *dogList = malloc(size * sizeof(*dogList));
	

	/* Adding elements to array */
	for (size_t i = 0; i < size; ++i)
	{
		Dog *newDog = malloc(sizeof(*newDog));
		printf("Enter name of dog: ");
		scanf("%s", newDog->name);
		
		do
		{
			printf("Enter dog's weight: ");
			scanf("%hu", newDog->weight);

			if (newDog->weight < 0)
			{
				printf("Weight entered is invalid");
			}

		} while (newDog->weight < 0);

		dogList[i] = *(newDog);
		free(newDog);
	}

	void DogSortbyName(dogList, size);

	printf("After sorting by name: ");
	for (size_t i = 0; i < size; ++i)
	{
		printf("%s", dogList[i].name);
	}

	void DogSortbyWeight(dogList, size);

	printf("After sorting by weight: ");
	for (size_t i = 0; i < size; ++i)
	{
		printf("%s", dogList[i].name);
	}

	free(dogList);

	return 0;
}