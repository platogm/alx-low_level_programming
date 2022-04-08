#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all base 16 digits
 *
 * Return: 0 if correct
 */
int main(void)
{
	int i = 48;

	while (i != 103)
	{
		putchar(i);
		if (i == 57)
		{
			i = 96;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
