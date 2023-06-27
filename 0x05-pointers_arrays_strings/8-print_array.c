#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int array[5] = { -198, 298, 402, -1024, 98 };
    int i;

    for (i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("%d", array[i]);
        if (i != sizeof(array) / sizeof(int) - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return (0);
}
