#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: the size of the hash table
* Return: pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int long x;
	hash_table_t *new_hash_table;

	if (size == 0)
		return (NULL);

	new_hash_table = malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(size * sizeof(hash_node_t *));

	if (!new_hash_table->array)
		return (NULL);

	for (x = 0; x < size; x++)
		new_hash_table->array[x] = NULL;
	return (new_hash_table);
}
