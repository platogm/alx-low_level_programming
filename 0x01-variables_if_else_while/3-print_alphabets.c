#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all lower and upper case letters repectively
 *
 * Return: 0 if correct
 */
int main(void)
{
	int i = 97;

	while (i != 91)
	{
		putchar(i);
		if (i == 122)
			i = 64;
		i++;
	}

	putchar('\n');
	return (0);
}
