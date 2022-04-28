#include "main.h"

/**
 * checkwild - checks if the wild card can fit the string
 * @s1: string to check
 * @s2: string with wild card
 * Return: 1 if possible, 0 if not
 **/

int checkwild(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1))
	{
		return (1);
	}
	else if (*s2 == '*' && wildcmp(s1, s2))
	{
		return (1);
	}
	else
	{
		return (checkwild(s1 + 1, s2));
	}
}

/**
 * wildcmp - checks if the two strings can be considered the same
 * @s1: string to check
 * @s2: string with wild card
 * Return: 1 if they can be considered same, 0 if not
 **/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' && *s2 == '*' && s2[1] == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (s2[1] == '\0')
			return (1);
		return (checkwild(s1, s2 + 1));
	}
	return (0);
}
