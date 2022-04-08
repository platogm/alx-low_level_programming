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
		putchar(i);
	}
	putchar('\n');

	return (0);
}
