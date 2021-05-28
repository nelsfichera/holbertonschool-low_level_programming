#include "hash_tables.h"
/**
* key_index - generates the index of a key using djb2
* @key: the key
* @size: the size of the array in the hash table
* Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb(key) % size);
}
