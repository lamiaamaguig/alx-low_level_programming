#include <stdio.h>
/**
 * _puts - Prints a string
 * @str: the string to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	_putchar('\n');
}
