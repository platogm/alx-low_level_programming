#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the digits 0-9
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
