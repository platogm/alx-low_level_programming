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

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
