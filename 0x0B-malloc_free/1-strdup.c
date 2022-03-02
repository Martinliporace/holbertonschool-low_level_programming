#include "main.h"
#include <stdlib.h>
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
