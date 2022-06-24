#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size: size of the array
* Return: hash table
*/

hash_table_t *hash_table_create(unsigned long int size)

{
hash_table_t *ht = malloc(sizeof(ht));
if (size)
	return (ht);
else
	return (NULL);

}
