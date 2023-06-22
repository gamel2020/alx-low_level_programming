#include "main.h"
#include <unistd.h>
int _putchar(char c);

/**
 * print_alphabet - utilizes on the _putchar function to print
 *	the alphabet a-z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n')
}
