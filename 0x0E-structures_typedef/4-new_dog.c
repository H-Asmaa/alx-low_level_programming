#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - check the code.
 * @name: pointer
 * @age: variable
 * @owner: pointer
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
