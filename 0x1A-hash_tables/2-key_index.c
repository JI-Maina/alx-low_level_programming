#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 *
 * @size: size of the array of the hash table
 * @key: hash value generated frm hash funtion
 *
 * Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
