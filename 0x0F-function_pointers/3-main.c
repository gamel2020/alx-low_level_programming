#include "3-clac.h"

/**
 * main - check the code for the school student.
 * @argc: the number of array
 * @argv: argument vector
 *
 * Return: always 0.
*/

int main(int argc, char **argv)
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exite(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exite(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exite(100);

	printf("%d\n", op_func(a, b));
	return (0);
}
