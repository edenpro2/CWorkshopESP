#include "Fibonacci.h"
#include <stdio.h>
#include <math.h>

int64_t Fibonacci(uint fibTerm)
{
    return (pow(((1 + sqrt(5)) / 2), fibTerm) - pow(((1 - sqrt(5)) / 2), fibTerm)) / sqrt(5);
}

int main()
{
    uint fibInput;
    printf("Enter a number for the nth Fibonacci term: ");
    do
    {
        scanf_s("%d", &fibInput);
        if (fibInput < 0)
        {
            printf("Number entered is negative");
        }

    } while (fibInput < 0);

    printf("term at %d place: %d", fibInput, Fibonacci(fibInput));

}