#include "hash_tables.h"
/**
 * key_index - a function that creates a hash table
 * @size: variable
 * @key: variable
 * Return: hash_table_t.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
