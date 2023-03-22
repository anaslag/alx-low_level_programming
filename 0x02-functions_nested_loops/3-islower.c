/**
 * _islower - shows 1 if the letter is lower cas
 * @c: the caracter in ASCII
 * Return: 1 for the lowercase, 0 for the rest
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
