#include "main.h"
#include <stdio.h>
/**
 * main - find prime number
 *
 * Description: find largest prime number of 612852475143
 *
 * Return: zero
 **/

int main(void)
{
	long int max, test;

	max = 612852475143;
	test = 2;

	while (max > test)
	{
		if (max % test == 0)
		{
			max = max / test;
			test = 2;
		}
		else
			test++;
	}
	printf("%ld\n", max);
	return (0);
}
