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

	replace['a'] = 4;
	replace['A'] = 4;
	replace['e'] = 3;
	replace['E'] = 3;
	replace['o'] = 0;
	replace['O'] = 0;
	replace['t'] = 7;
	replace['T'] = 7;
	replace['l'] = 1;
	replace['L'] = 1;

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] = replace[i];
	}
}
