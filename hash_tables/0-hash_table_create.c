#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_create - initializes prototype
 * @size: size of array
 * Description: creates new hash table, init array based on size
 * Return: pointer to newly created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *b;
	unsigned long int i;

	b = malloc(sizeof(hash_table_t));
	if (b == NULL)
		return (NULL);
	b->size = size;
	b->array = malloc(sizeof(hash_node_t *) * size);
	if (b->array == NULL)
	{
		free(b);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		b->array[i] = NULL;
	return (b);
}
