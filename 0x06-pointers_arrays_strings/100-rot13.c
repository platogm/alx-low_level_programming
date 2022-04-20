#include "main.h"

/**
 * rot13 - encode string with rot13
 * @src: string to encode
 * Return: string
 **/

char *rot13(char *src)
{
	char subs[123];
	int i;

	for (i = 65; i < 91; i++)
	{
		subs[i] = (((i + 13) - 65) % 26) + 65;
	}

	for (i = 97; i < 123; i++)
	{
		subs[i] = (((i + 13) - 97) % 26) + 97;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
			src[i] = subs[src[i]];
	}
	return (src);
}
