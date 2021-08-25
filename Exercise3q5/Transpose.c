#include "Transpose.h"

void Transpose(int** matrix, int *rows)
{
    /* swap values on either side of the first diagonal */
    for (int row = 1; row < rows; row++) {
        /* stop the inner loop when b == a */
        for (int column = 0; column < row; column++) 
        {
            Swap(matrix[row][column], matrix[column][row]);
        }
    }
}

void Swap(int* a, int* b)
{
    int *tmp = *a;
    *a = *b;
    *b = *tmp;
}