#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings.
* @s1: coso
* @s2: pum
*
*
* Return: pointer of an array of chars or NULL
*/

char *str_concat(char *s1, char *s2)

{

	char *copia;

	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	copia = malloc(sizeof(char) * (i + j + 1));

	if (copia == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		copia[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		copia[i] = s2[j];
		i++, j++;
	}

	copia[i] = '\0';
	return (copia);
}
