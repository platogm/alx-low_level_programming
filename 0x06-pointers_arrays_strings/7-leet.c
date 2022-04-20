#include "main.h"

/**
 * leet - convert string to leet speak
 * @c: string to convert
 * Description: replaces a, e, o, and t with 4, 3, 0, 7, and 1 respectively
 * Return: string c
 **/

char *leet(char *c)
{
	int i, j;
	char replace[109];

	for (i = 0; i < 109; i++)
	{
		replace[i] = i;
	}

	replace[97] = 4;
	replace[65] = 4;
	replace[101] = 3;
	replace[69] = 3;
	replace[111] = 0;
	replace[79] = 0;
	replace[116] = 7;
	replace[84] = 7;
	replace[108] = 1;
	replace[76] = 1;

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] = replace[i];
	}

	return (c);
}
