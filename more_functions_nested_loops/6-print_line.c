#include <stdio.h>
#include "main.h"
/**
 * print_line - description
 * Description
 *
 * Return: print numbers
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
