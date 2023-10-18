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
	if (n > 98)
	{
		printf("%d", n);
		while (n > 98)
		{
			n = n - 1;
			printf(", %d", n);
		}
		_putchar('\n')
	} else if (n < 98)
	{
		printf("%d", n)
		while (n < 98)
		{
			n = n + 1;
			printf(", %d", n);
		}
		_putchar('\n')
	} else
	{
		printf("98\n"); 
	}
	
}
