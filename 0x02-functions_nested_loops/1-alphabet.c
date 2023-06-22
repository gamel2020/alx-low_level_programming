#include "main.h"

/**
 * print _alphabet - utilizes on the _putchar function to print
 *		the alphabet a - z
*/

void print_puchar(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
