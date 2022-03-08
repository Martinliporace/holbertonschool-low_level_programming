#include <stdio.h>
#include "dog.h"

/**
* init_dog - that initialize a variable of type struct dog
* Return: Always 0.
* @name: name
* @age: age
* @owner: owner
* @d: coso
*
**/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
