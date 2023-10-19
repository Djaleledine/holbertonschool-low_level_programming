#include <stdio.h>
#include "main.h"
/**
 * more_numbers - description
 * Description
 *
 * Return: print numbers
 */
void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				putchar('0' + (n / 10));
			putchar('0' + (n % 10));
		}
		putchar('\n');
	}
}
