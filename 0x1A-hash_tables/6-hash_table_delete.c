#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht: the hash table
* Return: v0!d
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *temp = NULL;

	if (ht != NULL)
	{
		for (x = 0; x < ht->size; x++)
		{
			while (ht->array[x] != NULL)
			{
				temp = ht->array[x];
				ht->array[x] = ht->array[x]->next;
				free(temp->value);
				free(temp->key);
				free(temp);
			}
		}
		free(ht->array);
	}
	free(ht);
}
