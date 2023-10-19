#include <stdio.h>
#include "main.h"
/**
 * _islower - cheks if it is lowercase
 * @c: is the char being checked
 * Description: Checks if the char is
 * lowercase
 *
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
			return (1);
	}
	return (0);
}
