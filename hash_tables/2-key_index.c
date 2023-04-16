#include "hash_tables.h"
/**
 * key_index - initializes prototype
 * @key: string defined as a key
 * @size: size of array inside of the hash table
 * Description: uses hash_djb2 to get index of a key in a hash table
 * Return: return value of hash_djb2 function format size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
