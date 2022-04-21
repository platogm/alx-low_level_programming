#include "main.h"

/**
 * add_str - adds to numbers represented in string format
 * @n1: firsst number to be added
 * @n2: second number to be added
 * @s1: size of the first number
 * @s2: size of the second number
 * @r: This is where the result would be stored
 * @size_r: size of the buffer
 * Return: if success then return length of result else 0
 */
int add_str(char *n1, char *n2, int s1, int s2, char *r, int size_r)
{
	int i;
	int sum;
	int carry = 0;
	int tot;

	for (i = 0; i < s1; i++)
	{
		if (i < s2)
			tot = n1[s1 - 1 - i] + n2[s2 - 1 - i] - 96 + carry;
		else
			tot = n1[s1 - 1 - i] - 48 + carry;
		carry = tot / 10;
		sum = tot % 10;
		if (i == (size_r - 1))
			return (0);
		r[i] = sum + 48;
	}
	if (carry != 0 && i >= size_r - 1)
		return (0);
	else if (carry != 0)
	{
		r[i] = carry + 48;
		i++;
		r[i] = '\0';
	}
	else
	{
		r[i] = '\0';
	}
	return (i);
}

/**
 * infinite_add - adds to numbers represented in string format
 * @n1: firsst number to be added
 * @n2: second number to be added
 * @r: This is where the result would be stored
 * @size_r: size of the buffer
 * Return: the sum of the two
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int s1 = 0;
	int s2 = 0;
	int length;
	char temp;

	for (i = 0; n1[i] != '\0'; i++)
	{
		s1++;
	}

	for (i = 0; n2[i] != '\0'; i++)
	{
		s2++;
	}

	if (s1 > s2)
	{
		length = add_str(n1, n2, s1, s2, r, size_r);
	}
	else
	{
		length = add_str(n2, n1, s1, s2, r, size_r);
	}
	if (length == 0)
		return (0);
	for (i = 0; i < length; i++)
	{
		temp = r[length - 1];
		r[length - 1] = r[i];
		r[i] = temp;
		length--;
	}

	return (r);
}
