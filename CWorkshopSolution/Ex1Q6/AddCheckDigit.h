#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _ADDCHECKDIGIT_H_
#define _ADDCHECKDIGIT_H_

/// @brief Adds the last check digit at the end of an ID according to Luhn's algorithm
/// @param 8-digit ID number 
int AddCheckDigit(int number);

#endif 