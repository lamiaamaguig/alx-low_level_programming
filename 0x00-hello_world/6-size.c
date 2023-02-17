#include <stdio.h>
/**
  * main - A program that prints the size of various computer types
  * Return: 0 (Success)
  */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %zu bytes(s)\n", sizeof(float));
return (0);
char str[147]="your 147 character string here";
char newstr[144];
memcpy(newstr,str,144};
		newstr[144]='\O';
		}
