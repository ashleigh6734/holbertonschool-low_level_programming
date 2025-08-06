#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: Pointer to the hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *current;
    unsigned long int index;

    if (!ht || !key || !*key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}