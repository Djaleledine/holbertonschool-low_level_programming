#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - return the last digit of the number
 * @n: the number
 * Description: return the last digit of n
 *
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar('0' + n);
	_putchar('\n');
	return (n);
}
