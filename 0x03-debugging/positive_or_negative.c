#include "main.h"
/**
 * positive_or_negative - to print positive or negative numbers
 * @i: parameter
 *
 * Return: always 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d, is positive\n", i);
	else if (i < 0)
		printf("%d, is negative\n", i);
}
