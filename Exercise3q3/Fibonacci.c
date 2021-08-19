#include "Fibonacci.h"
#include <stdio.h>
#include <math.h>

uint Fibonacci(uint fibTerm)
{
    if (fibTerm <= 1)
        return fibTerm;
    return Fibonacci(fibTerm - 1) + Fibonacci(fibTerm - 2);
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