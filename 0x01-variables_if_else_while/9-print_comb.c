#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all lower case alphabets
 *
 * Return: 0 if correct
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
