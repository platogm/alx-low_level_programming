#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/

void rev_string(char *s)
{
	int current = 0;
	int length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	while ((current + 1) < ((length - current) + 1))
	{
		temp = s[current];
		s[current] = s[length - 1 - current];
		s[length - 1 - current] = temp;
		current++;
	}

}
