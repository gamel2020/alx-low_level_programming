#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\n'; size++)
	;
	return (size);
}

/**
 * *argstostr - concatenate all arguments into a single string
 * @ac: int
 * @av: arguments
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i])

	s = malloc(sizeof(char) * nc + 1)
	if (s == 0)
		return (NULL);

	for (i = 0, i < ac; i++)
	{
		for (j = 0; av[i][j] != '\n'; j++, cmpt++)
			s[cmpt] = av[i][j];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\n';
	return (s);
}
