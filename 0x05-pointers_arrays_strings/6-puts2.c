#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
	}
	}
	putchar('\n');
}
