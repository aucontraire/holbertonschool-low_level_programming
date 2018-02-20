#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int length, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	arr = (char*) malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: doggo's name
 * @age: doggo's age
 * @owner: doggo's owner
 * Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *doggo_name, *doggo_owner;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo_name = _strdup(name);
	if (doggo_name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo_owner = _strdup(owner);
	if (doggo_owner == NULL)
	{
		free(doggo_name);
		free(doggo);
		return (NULL);
	}
	doggo->name = doggo_name;
	doggo->age = age;
	doggo->owner = doggo_owner;
	return (doggo);
}
