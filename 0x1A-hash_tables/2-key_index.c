#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key
 * @key: The key
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the DJB2 hash function */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the modulus with the size of the array */
	return (hash_value % size);
}
