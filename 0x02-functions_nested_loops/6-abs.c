/**
 * _abs - computes the absoulute value of an integer
 * @num: takes an integer as input
 *
 * Description: if num > 0 then the absolute int is num
 * if num < 0 it is converted to an absolute value
 * Return: 0 program runs successfuly
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
	return (0);
}
