#include <stdio.h>
#include <string.h>

/**
 * _putchar - Prints a string
 *
 * Return: 0
 */
int _putchar(char x[])
{
	long unsigned int i;

	for (i=0; i <= strlen(x); i++)
	{
		putchar(x[i]);
	}
	return (0);
}
