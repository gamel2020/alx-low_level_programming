#include "main.h"
#include <stdlib.h> /* Include the necessary header for malloc function*/

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
	return (NULL);

	/* Calculate the size of the string*/
	for (; str[size] != '\0'; size++)
	;

	/* Allocate memory for the copy of the string*/
	m = malloc((size * sizeof(*str)) + 1);

	if (m == NULL)
		return (NULL);

	/* Copy each character from the original string to the new memory*/
	for (; i < size; i++)
	m[i] = str[i];

	m[i] = '\0'; /* Add null terminator at the end of the copied string*/

	return (m);
}
