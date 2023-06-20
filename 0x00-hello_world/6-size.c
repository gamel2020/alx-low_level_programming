#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizof(char));
	printf("Size of an int: %lu byte(s)\n", sizof(int));
	printf("Size of a long int: %lu byte(s)\n", sizof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizof(float));
	return (0);
}
