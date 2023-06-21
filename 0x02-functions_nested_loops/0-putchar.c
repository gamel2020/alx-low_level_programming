#include "main.h"
#include <unistd.h>

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar\n";
    int len = sizeof(str) / sizeof(str[0]);
    int i;

    for (i = 0; i < len; i++)
    {
        write(STDOUT_FILENO, &str[i], 1);
    }

    return (0);
}
