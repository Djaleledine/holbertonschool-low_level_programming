#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - description
 * @n: putchar
 * Description
 *
 * Return: print numbers
 */
void print_line(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
