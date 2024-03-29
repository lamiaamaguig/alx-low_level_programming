#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - gives array of args
 * @ac: argument count
 * @av: array of arguments
 * Return: char value
 */

char *argstostr(int ac, char **av)
{
	int size = 0;
	char *s;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	size += (ac + 1);
	s = malloc((size) * sizeof(char));
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
