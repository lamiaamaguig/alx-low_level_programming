#include "main.h"
/**
 * _ islower - checks for lowercase character
 * 0c: The character is to checked
 * Return: 1 for lowercae character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
		return (1);
	}
	return (0);
}
