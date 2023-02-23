#include <stdio.h>
/**
 * fizz_buzz - Initializes prototype
 * Description: Prints fizz for m of three and buzz for m of five
 * Return:
 */
void fizz_buzz(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i / 3) == 0 || (i / 5) == 0) /* Check for mul of three and five */
		{
			if ((i / 3) == 0) /* filters mul of three */
			{
				_putchar(70);
				_putchar(105); /** Fizz */
				_putchar(122);
				_putchar(122);
			}
			else if ((i / 5) == 0) /* filters mul of five */
			{
				_putchar(66);
				_putchar(117); /** Buzz */
				_putchar(122);
				_putchar(122);
			}
		}
		else
		{
			if (i > 99)
				_putchar((i / 100) + '0');
			if (i > 9)
				_putchar((i / 10) + '0');
			else if (i < 10 && i > 0)
				_putchar((i % 10) + '0');
		}
	}
}
