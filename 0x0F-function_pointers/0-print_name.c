#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: Nothing.
 */
 * print_name - Print name using pointer to function
 * @name: string
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	if (name == NULL || f == NULL)
		return;

	f(name);
}
