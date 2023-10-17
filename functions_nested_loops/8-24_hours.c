#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of a day
 *
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a <= 2)
	{
		while (c <= 5)
		{
			if (d <= 9)
			{
				_putchar('0' + a);
				_putchar('0' + b);
				_putchar(':');
				_putchar('0' + c);
				_putchar('0' + d);
				_putchar('\n');
				d = d + 1;
			}
			else
			{
				d = 0;
				c = c + 1;
			}
		}
		c = 0;
		if (a < 2)
		{
			if (b < 9)
				b = b + 1;
			else
			{
				b = 0;
				a = a + 1;
			}
		}
		else b < 3 ? b++ : break;
	}
}
