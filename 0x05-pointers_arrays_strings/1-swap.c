/**
 * swap_int - swaps the value of two integers
 * @a: integet 1
 * @b: integer 2
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
