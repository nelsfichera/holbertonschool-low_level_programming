#include "hash_tables.h"
/**
* hash_table_print - print the hash table
* @ht: the hash table
* Return: sk8r v0id
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x;
	int count = 0;

	if (ht)
	{
		printf("{");
		for (x = 0; x < ht->size; x++)
		{
			node = ht->array[x];
			while (node)
			{
				if (count > 0)
					printf(", ");
				printf("\'%s\':\'%s\'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
		printf("}\n");
	}
}
