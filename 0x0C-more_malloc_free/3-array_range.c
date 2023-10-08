#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * *array_range - creates an array of integers within a specified range
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: pointer to the array of integers, or NULL on error
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
