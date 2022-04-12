#include "main.h"

/**
 * print_sign - Prints the sign of the number
 * @n: the number to be checked
 *
 * Return: 1 if positive and 0 if zero and -1 if neg.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
