#include "main.h"
int _putchar(char c);
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
    {
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	}
}
