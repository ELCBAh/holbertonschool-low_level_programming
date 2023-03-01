/**
 * reset_to_98 - takes a pointer to an int abd updates to 98
 *
 * Return: Empty
 */
/**
 * @n: pointer to n
 */
void reset_to_98(int *n)
{
	int *p = &*n;
	
	*p = 98;
}
