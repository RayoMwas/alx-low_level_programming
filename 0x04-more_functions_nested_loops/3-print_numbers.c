/**
 * _putchar - prints single characters
 *  @c: is a single character
 *
 * Return: 0
 */
int _putchar(char c);
/**
 * print_numbers - prints numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
