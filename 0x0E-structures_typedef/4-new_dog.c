#include <stdlib.h>
#include "dog.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: coso
*
* Return: pointer of an array of chars or NULL
*/


char *_strdup(char *str)

{

char *copia;

int i, j;

if (str == NULL)
	return (NULL);
i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	copia = malloc(sizeof(*str) * i);
	if (copia == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		copia[j] = str[j];
		j++;
	}
	return (copia);
}

/**
* new_dog - creates a new dog.
* @name: coso
* @age: pum
* @owner: ahre
*
* Description: store a copy of name and owner
* Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->age = age;

	dog->name = _strdup(name);
	dog->owner = _strdup(owner);
	if (!dog->name || !dog->owner)
	{
		if (!dog->name)
			free(dog->owner);
		else
			free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
