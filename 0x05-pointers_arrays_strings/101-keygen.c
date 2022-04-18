#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random password
 * Return: Returns 0
 **/

int main(void)
{
	char password[101];
	int i;

	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		password[i] = (48 + rand() % 10);
	}

	password[100] = '\0';
	printf("%s", password);

	return (0);
}
