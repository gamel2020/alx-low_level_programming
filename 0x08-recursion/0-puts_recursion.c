#include "main.h"

<<<<<<< HEAD
/*
 * _puts_recursion - prints a string, followedby a new line
 * @s: points to the string
 * Return: void
 */

=======
/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The string to be printed.
 *
 * Description: This function recursively prints each character of the string
 *	until it reaches the null terminator ('\0') character.
 *	It does not return anything.
 */


>>>>>>> origin/master
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
