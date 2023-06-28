#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet in lowercase than uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(ch);
		CH++;
	}
	putchar('\n');
	return (0);
}
