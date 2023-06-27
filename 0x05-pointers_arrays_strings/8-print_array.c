#include "main.h"

/**
 * print_array - prints n elements of an arrayof integer
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Always 0 (Success)
*/
void print_array(int *a, int n)
{
	int array[5] = { -198, 298, 402, -1024, 98 };
	int i;

	for (i = 0; i < sizeof(array) / sizeof(int); i++)
	{
	printf("%d", array[i]);
	if (i != sizeof(array) / sizeof(int) - 1)
       	{
	printf(", ");
	}
	}
		printf("\n");

	return (0);
}
