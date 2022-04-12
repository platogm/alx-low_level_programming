#include "main.h"

/**
 * jack_bauer - print every minute in a day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i;
	int j;
	int firstD;
	int secondD;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			firstD = i / 10;
			secondD = i % 10;
			_putchar(firstD + '0');
			_putchar(secondD + '0');
			_putchar(':');
			firstD = j / 10;
			secondD = j % 10;
			_putchar(firstD + '0');
			_putchar(secondD + '0');
			_putchar('\n');
		}
	}
}
