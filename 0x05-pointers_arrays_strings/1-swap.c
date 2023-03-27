#include "main.h"

/**
 * swap_int - main function
 * @a: int 1
 * @b: int 2
 *
 * Return: the value swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
