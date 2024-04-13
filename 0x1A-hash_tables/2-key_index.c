#include "hash_tables.h"

/**
*key_index - get index for a given key
*@key: key 'str' to hash
*@size: size of array of hash table
*
* Return: index of 'key' using djb2
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb(key) % size);
}
