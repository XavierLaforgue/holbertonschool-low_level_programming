/**
 * _isupper - checks for uppercase character
 * @c: character
 *
 * Return: 1 if uppercase, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
