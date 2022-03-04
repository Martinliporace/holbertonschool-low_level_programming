#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings.
* @s1: coso
* @s2: pum
* @n: ahre
*
* Return: pointer of an array of chars or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *copia;

	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j <= n)
		j++;

	copia = malloc(sizeof(char) * (i + j));

	if (copia == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		copia[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0' && j <= n)
	{
		copia[i] = s2[j];
		i++, j++;
	}

	copia[i] = '\0';
	return (copia);
}
