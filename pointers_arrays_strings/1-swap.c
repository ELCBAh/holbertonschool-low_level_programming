/**
 * swap_int - swap the values of two integers
 *
 * Return: Empty
 */
/**
 * @a: input a
 */
/**
 * @b: input b
 */
void swap_int(int *a, int *b)
{
	int n;
	int *p = &*a;
	int *pp = &*b;

	n = *pp;
	*pp = *p;
	*p = n;
}
