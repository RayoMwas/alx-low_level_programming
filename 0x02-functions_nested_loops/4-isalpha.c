/**
 * _isalpha - checks for alphabetic characters
 * @c: stores the input
 *
 * Return: 0 if it runs successfuly
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
