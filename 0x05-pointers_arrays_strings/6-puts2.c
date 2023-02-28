#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{
        int longi = 0;
        int t = 0;
        char *y = str;
        int O;

while (*y != '0')
        {
                y++;
                longi++;
        }
t = longi - 1;
for (O = 0; O <= 1 ; O++)
        {
                if (O % 2 == 0)
                {
			_putchar(str[O]);
        }
        }
_putchar('\n');
}
