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
	_putchar('0' + (n % 10));
	return (n % 10);
}
