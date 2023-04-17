#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - check the code.
 * @d: pointer
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
