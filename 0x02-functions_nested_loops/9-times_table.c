#include "main.h"

/**
 * times_table - prints out the times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int firstD;
	int secondD;
	int multiply;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			multiply = i * j;
			if (multiply < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(multiply + '0');
			}
			else
			{
				firstD = multiply / 10;
				secondD = multiply % 10;
				_putchar(firstD + '0');
				_putchar(secondD + '0');
			}
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
