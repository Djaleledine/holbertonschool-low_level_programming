#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print natural numbers
 * @n: starting number
 * Description: print natural numbers till 98
 *
 *
 * Return void
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n > 98)
	{
		while (n > 98)
		{
			n = n - 1;
			printf(", %d", n);
		}
	} else if (n < 98)
	{
		n = n + 1;
		printf(", %d", n);
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
