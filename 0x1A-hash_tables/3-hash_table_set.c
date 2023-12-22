#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the table to be updated with key value.
 * @key: is the hkey.
 * @value: value associated with the key.
 * Return: 1(success), 0(failed).
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val = strdup(value);
    unsigned long int index = key_index((const unsigned char*)key, ht->size);
    hash_node_t *current, *new;

    if (ht == NULL || key == NULL || value == NULL)
    {
        return (0);
    }

    for (current = ht->array[index]; current != NULL; current = current->next)
    {
        if(strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(val);
            free(val);
            return (1);
        }
    }
    new = (hash_node_t *)malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        free(val);
        return (0);
    }
    new->value = strdup(val);
    free(val);
    if (new->value == NULL)
    {
        free(new->key);
        free(new);
        return(0);
    }
    new->next = ht->array[index];
    ht->array[index] = new;
    return (1);
}