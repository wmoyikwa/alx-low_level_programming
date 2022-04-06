#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char and initializes it with a special char
 * @size: size of the array to be created
 * @c: char to  initialize an array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
