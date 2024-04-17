#include"hash_tables.h"

/** 
 * hash_table_get - retrieves a value associated with a key
 * @ht: has table to look in to
 * @key: key being looked for
 *
 * Return: value associated with the element or NULL if key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned int index;
if (!ht || !key || strlen(key) == 0)
return (NULL);
index = hash_djb2((const unsigned char *)key) % ht->size;
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
