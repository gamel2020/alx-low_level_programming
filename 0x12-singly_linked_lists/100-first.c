#include "lists.h"

void _constructor(void) __attribute__((construcrtor));

/**
 * _constructor - execute befor main()
 *
 * Return: void
 */

void _constructor(void)
{
	printf("you're beat! and yet, you must allow, \n"
			"I bore my house upon my back! \n");
}
