#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line
 * using the putchar function.
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar('0' + c);

	putchar('\n');
	return (0);
}
