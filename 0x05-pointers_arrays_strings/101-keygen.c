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
	srand(time(0));

	int length = rand() % 100;
	char password[length + 1];
	int i;

	for (i = 0; i < length; i++)
	{
		password[i] = (48 + rand() % 10);
	}

	password[length] = '\0';
	printf("%s", password);
}
