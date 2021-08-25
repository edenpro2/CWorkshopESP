#ifndef _STDDOG_H_
#define _STDDOG_H_

#define NAMELENGTH 20

typedef unsigned short ushort;

typedef struct Dog 
{
	char name[NAMELENGTH];
	ushort weight;

} Dog;


/// @brief Sorts a list of dogs by name
/// @param dogArray pointer to that list
/// @param size the length of the array
void DogSortbyName(Dog *dogArray, int size);

/// @brief Sorts a list of dogs by weight
/// @param dogArray pointer to that list
/// @param size the length of the array
//void DogSortbyWeight(Dog*dogArray, int size);

/// @brief Swaps between two dogs
/// @param first Dog
/// @param second Dog
void DogSwap(Dog *first, Dog *second);

#endif