#include <stdio.h>
#include "main.h"
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
	if (sum < 0)
	{
		_putchar('-');
		sum = sum * -1;
	}
	if (sum = 0)
	{
		_putchar('0');
		return(sum);
	}
	print_int(sum);
	return (sum);
}
void print_int(int num)
{
	if (num / 10)
		print_int(num);
	_putchar('0' + (num % 10));
}
