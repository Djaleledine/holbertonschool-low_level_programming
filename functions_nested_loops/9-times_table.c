#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the times table
 * Description: prints the 9 times table
 *
 *
 * Return void
 */
void times_table(void)
{
	int n;
	int i;
	int l;
	int r;

	i = 0;
	n = 0;
	l = 1;
	r = 0;
	while (i < 10)
	{
		_putchar('0');
		while (l < 10)
		{
			r = n * l;
			_putchar(',');
			_putchar(' ');
			if ((r / 10) >= 1)
			{
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			} else
			{
				_putchar(' ');
				_putchar('0' + r);
			}
			l++;
		}
		l = 1;
		_putchar('\n');
		i++;
		n++;
	}
}
