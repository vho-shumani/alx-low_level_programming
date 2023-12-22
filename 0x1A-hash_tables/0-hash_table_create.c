#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: pointer to the hash table, NULL (failed)
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;
	unsigned long int i;

	tb = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (tb == NULL)
	{
		return (NULL);
	}
	tb->size = size;
	tb->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (tb->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tb->array[i] = NULL;
	}
	return (tb);
}
