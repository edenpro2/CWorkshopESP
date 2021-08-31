// Create a macro that prints a variable name and its value, but only in debug mode. Something like :
// TRACE_VAR(x); /* Output: "x = 5" */
//
// Is the prototype above enough ? If not, do what it takes to make it work. Now trace the index, grade, sum, and average throughout the following loop :
// for (size_t index = 0; index < ARRAY_SIZE; ++index)
// {
// 	 sum += grades[index];
// 	 average = sum / (index + 1);
// }

#include <stdio.h>
#ifdef _DEBUG
#define getName(var)  #var
#define TRACE_VAR(x) printf("%s = %d \n", getName(x), x);
#endif

#define ARRAY_SIZE 10


int main(void)
{

	int sum = 0, average = 0;
	int grades[ARRAY_SIZE] = { 90, 50, 54, 65, 66, 80, 83, 92, 100, 57 };
	int grade;

	for (size_t index = 0; index < ARRAY_SIZE; ++index)
	{
		grade = grades[index];

		TRACE_VAR(index);
		TRACE_VAR(sum);
		TRACE_VAR(grade);
		
		sum += grade;
		average = sum / (index + 1);

		TRACE_VAR(average);

		printf("\n");
	}
}