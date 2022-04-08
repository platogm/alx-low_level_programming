#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all lower case alphabets in reverse
 *
 * Return: 0 if correct
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
