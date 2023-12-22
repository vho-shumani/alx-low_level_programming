#include "hash_tables.h"
/**
 * key_index - returns the index of a key.
 * @key: to locate.
 * @size: size of the array.
 * Return: the index of the ker
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
