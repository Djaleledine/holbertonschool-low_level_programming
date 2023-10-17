#include <stdio.h>
#include "main.h"
/**
 * _abs - return the absolute value
 * @n: the number
 * Description: return the absolute value of n
 * 
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
