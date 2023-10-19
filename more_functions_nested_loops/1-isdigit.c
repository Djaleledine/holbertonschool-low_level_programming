#include <stdio.h>
#include "main.h"
/**
 * _isdigit - cheks if it is a digit
 * @c: is the char being checked
 * Description: Checks if the char is
 * a digit
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (c == ch)
			return (1);
		printf(" %d et %d", c, ch);
	}
	return (0);
}
