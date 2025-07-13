#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog and stores copies of name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *n_copy, *o_copy;
    int i, name_len = 0, owner_len = 0;

    if (name == NULL || owner == NULL)
        return (NULL);

    while (name[name_len] != '\0')
        name_len++;
    while (owner[owner_len] != '\0')
        owner_len++;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    n_copy = malloc((name_len + 1) * sizeof(char));
    if (n_copy == NULL)
    {
        free(d);
        return (NULL);
    }

    o_copy = malloc((owner_len + 1) * sizeof(char));
    if (o_copy == NULL)
    {
        free(n_copy);
        free(d);
        return (NULL);
    }

    for (i = 0; i < name_len; i++)
        n_copy[i] = name[i];
    n_copy[i] = '\0';

    for (i = 0; i < owner_len; i++)
        o_copy[i] = owner[i];
    o_copy[i] = '\0';

    d->name = n_copy;
    d->age = age;
    d->owner = o_copy;

    return (d);
}
