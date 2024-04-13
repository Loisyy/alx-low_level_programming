#include "hash_tables.h"

/**
* hash_table_set - function to add an element to the hash table
* @ht: pointer to hash table
* @key: key to add the element
* @value: value to add the element
*
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
char *value_copy_ptr, *key_copy_ptr;
hash_node_t  *bucket, *new_node;

if (!ht || !key || !*key || !value)
return (0);

value_copy_ptr = strdup(value);
if (!value_copy_ptr)
return (0);

index = key_index((const unsigned char *)key, ht->size);
bucket = ht->array[index];

while (bucket)
{
if (!strcmp(key, bucket->key))
{
free(bucket->value);
bucket->value = value_copy_ptr;
return (1);
}
bucket = bucket->next;
}
new_node = calloc(1, sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_copy_ptr);
return (0);
}
key_copy_ptr = strdup(key);
if (!key_copy_ptr)
return (0);
new_node->key = key_copy_ptr;
new_node->value = value_copy_ptr;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
