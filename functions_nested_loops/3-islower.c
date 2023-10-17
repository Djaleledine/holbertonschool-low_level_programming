#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Print the Alphabet
 *
 * Description: Prints the Alphabet in
 * lowercase
 *
 * Return: 0
 */
int print_alphabet(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((c + '0') == ch)
			return 1;
	}
	return 0;
}
