#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: Dog's basic attributes
 */
struct dog
{
char *name;
float age;
char *owner;

};

typedef struct dog dog_t;

/* any other function declarations or structures go here */

#endif /* DOG_H */
}
