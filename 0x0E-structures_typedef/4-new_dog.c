#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - check the code.
 * @name: pointer
 * @age: variable
 * @owner: pointer
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *p;
	char *Name;
	char *Owner;

	p = &new_dog;
	Name = (*p).name;
	Owner = (*p).owner;
	if (p != NULL)
	{
		(*p).name = name;
		(*p).age = age;
		(*p).owner = owner;
	}
	return (p);
}
