



#include <stdio.h>
#include "main.h"
/**
 * print_numbers - description
 * Description
 *
 * Return: print numbers
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
}
