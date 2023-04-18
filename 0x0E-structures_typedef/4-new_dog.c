#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy string from source to destination
 * @dest: string to copy to
 * @src: string to copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: check code
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new->name == NULL)
		return (NULL);
	_strcpy(new->name, name);

	new->age = age;

	if (owner == NULL)
	{
		free(new->owner);
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->owner == NULL)
		return (NULL);
	_strcpy(new->owner, owner);

	return (new);
}
