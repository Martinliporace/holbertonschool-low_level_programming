#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size: size of the array
* Return: hash table
*/

hash_table_t *hash_table_create(unsigned long int size)

{
hash_table_t *ht;
if (size < 1)
	return (NULL);

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
	return (NULL);

ht->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));
if (ht->array == NULL)
{
	free(ht);
	return (NULL);
}
memset(ht->array, 0, size);
ht->size = size;
return (ht);
}

