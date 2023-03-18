#include "main.h"
/**
 * argstostr - init prot
 * Description: concatenates all arguments
 * Return: pointer to new string
 */
/**
 * @ac: args count
 */
/**
 * @av: args
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *tmp;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 1; i <= ac; i++)
	{
		tmp = av[i];
		for (i = 0; i <= ac; i++)
		{
			tmp[i + 1] = '\n';
		}
		av[i] = tmp[i]
	}
	return (av);
}
