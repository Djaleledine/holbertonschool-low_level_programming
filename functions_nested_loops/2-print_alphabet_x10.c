#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Print the Alphabet
 *
 * Description: Prints the Alphabet in
 * lowercase 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
