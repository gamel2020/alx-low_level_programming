#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*ptr != '\0')
	{
	ptr++;
	}

	/* Append the source string to the destination string */
	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}

	/* Add a terminating null byte */
	*ptr = '\0';

	return (dest);
}

int main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "world!";

	printf("Before concatenation: %s\n", dest);
	_strcat(dest, src);
	printf("After concatenation: %s\n", dest);

	return (0);
}
