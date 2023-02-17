#include "main.h"
/**
 * _isalpha - checks for letter
 * Description: checks if input is a letter
 * Return: boolean
 */
int _isalpha(int c)
{
	if (isalpha(c))
		_islower(c);
	return (0);
}
