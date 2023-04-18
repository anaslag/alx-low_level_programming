#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length
 * @s: string to test
 *
 * Return: the length of the wanted string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - copies the string pointed
 * @dest: pointer to the buffer to which we copy the string
 * @src: string to be copied
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int lengt, i;

	lengt = 0;

	while (src[lengt] != '\0')
	{
		lengt++;
	}

	for (i = 0; i < lengt; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lengt1, lengt2;

	lengt1 = _strlen(name);
	lengt2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lengt1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lengt2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
