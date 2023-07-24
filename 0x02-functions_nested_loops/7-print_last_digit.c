/**
 * print_last_digit - prints the value of last digit
 * @num: stores the last digit
 *
 * Return: prints the last digit
 */
int print_last_digit(int num)
{
	int r;

	if (num < 0)
	{
		num = -num;
	}
	r = num % 10;
	return (r);
}
