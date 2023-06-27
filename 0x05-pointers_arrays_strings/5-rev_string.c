#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char s[11] = "Holberton!";
    int i, j;
    char c;

    j = strlen(s) - 1;
    for (i = 0; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    printf("%s\n", s);

    j = strlen(s) - 1;
    for (i = 0; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    printf("%s\n", s);

    return (0);
}
```

This code should produce the expected output when run.
