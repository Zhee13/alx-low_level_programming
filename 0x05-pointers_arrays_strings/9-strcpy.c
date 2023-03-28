#include "main.h"

/**
 * *_strcpy - main function
 * @dest: destination array
 * @src: source array
 *
 * Return: copied array
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
