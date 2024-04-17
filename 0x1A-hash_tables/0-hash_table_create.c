#include"hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table
 *
 * Return: a new hashtable with size @size, NULL if malloc fails to allocate
 * memory
 */
hash_table_t *hash_table_create(unsigned long int size)
{

unsigned long int i;
hash_table_t *table;
table = (hash_table_t *) malloc(sizeof(hash_table_t));
table->size = size;
if (table == NULL)
return NULL;
table->array = (hash_node_t **)malloc(table->size * sizeof(hash_node_t));
if (!table->array) 
return NULL;
for (i = 0; i < size; i++)
table->array[i] = NULL;
return (table);
}
