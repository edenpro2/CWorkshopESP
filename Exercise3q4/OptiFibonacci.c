#include "OptiFibonacci.h"
#include <stdio.h>
#include <math.h>
 
uint64_t OptiFibonacci(int fibTerm)
{
    return (fibTerm < 93) ? (powl(((1 + sqrtl(5)) / 2), fibTerm) - powl(((1 - sqrtl(5)) / 2), fibTerm)) / sqrtl(5) : 0;
}
    

int main()
{
    int64_t fibInput;
    printf("Enter a number for the nth Fibonacci term: ");
    do
    {
        scanf_s("%llu", &fibInput);
        if (fibInput < 0)
        {
            printf("Number entered is negative");
        }

    } while (fibInput < 0);

    printf("term at %llu place: %llu", fibInput, OptiFibonacci(fibInput));

}