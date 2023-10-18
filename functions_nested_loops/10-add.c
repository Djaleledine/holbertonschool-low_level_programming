#include <stdio.h>
#include "main.h"
/**
 * print_int - return the sum of two numbers
 * @n: first number
 * @n1: second number
 * Description: return the sum of
 * two integers
 *
 *
 * Return: the sum of n + n1
 */

void print_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if (num == 0)
	{
		_putchar('0');
	}

	if (num / 10)
		print_int(num / 10);
	_putchar('0' + (num % 10));
}
/**
 * add - return the sum of two numbers
 * @n: first number
 * @n1: second number
 * Description: return the sum of
 * two integers
 *
 *
 * Return: the sum of n + n1
 */
int add(int n, int n1)
{
	int sum;
	
	sum = n + n1;
	print_int(sum);
	return (sum);
}

