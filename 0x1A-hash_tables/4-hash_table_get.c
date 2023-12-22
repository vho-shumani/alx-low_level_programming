#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key.
 * @ht: A pointer to the hash table to look into.
 * @key: The key to look for.
 * Return: value associated with element (success), NULL (fail).
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *target;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);;

	if (ht == NULL || key == NULL || index >= ht->size)
	{
		return (NULL);
	}
	target = ht->array[index];
	while (target && strcmp(target->key, key) != 0)
	{
		target = target->next;
	}
	if (target == NULL)
	{
		return (NULL);
	}
	else
	{
		return (target->value);
	}
}
