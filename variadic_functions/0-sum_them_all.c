#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - initializes prototype
 * @n: num of ints to sum
 * @...: actual ints to sum
 * Description: computes sum of passed nums
 * Return: the sum or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0, num;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		sum += num;
	}
	va_end(nums);
	return (sum);
}
