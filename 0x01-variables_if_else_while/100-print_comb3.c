#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints combinations of 2 digits
 *
 * Return: 0 if correct
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (!(i == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
