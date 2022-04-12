/**
 * _islower - checks if the character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if yes and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);

	}
	return (0);
}
