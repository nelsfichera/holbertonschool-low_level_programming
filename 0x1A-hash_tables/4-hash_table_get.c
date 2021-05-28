#include "hash_tables.h"
/**
* hash_table_get - retrieves a value from hash table
* @ht: the hash table
* @key: the key
* Return: value on success, null on failure
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
