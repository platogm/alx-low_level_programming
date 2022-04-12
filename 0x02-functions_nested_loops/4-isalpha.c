/**
 * _isalpha - checks if the character is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 if yes and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	{
		return (1);

	}
	return (0);
}
