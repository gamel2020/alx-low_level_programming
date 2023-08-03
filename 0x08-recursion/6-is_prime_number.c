#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a given integer is a prime number
 * @n: integer to check
 * @othrn: other integer to use in the check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - recursively checks if a given integer is a prime number
 * @n: integer to check
 * @othrn: other integer to use in the check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int check_prime(int n, int othrn)
{

if (othrn >= n && n > 1)
	return (1);
else if (n % othrn == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, othrn + 1));
}
