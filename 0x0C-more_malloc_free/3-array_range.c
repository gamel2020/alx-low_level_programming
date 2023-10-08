#include "main.h"
#include <stdio.h>


/**
 * *array_range - creates an array of integers within a specified range
 * @min: starting int
 * @max: max int
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len)
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
