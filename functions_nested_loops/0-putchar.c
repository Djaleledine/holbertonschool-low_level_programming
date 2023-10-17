#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	putchar('\n');
	return (0);
}
