#include "main.h"
#include <stdio.h>
/**
* _strstr - locates a substring in a string.
* @haystack: coso
* @needle: pum
*
* Description: show a string
* Return: pointer to the beginning of the located substring
*/

unsigned int _strspn(char *s, char *accept)
{
{
	int i;
	int j;
	unsigned int suma;

	suma = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			suma++;
		if (accept[j] == '\0')
			return (suma);
	}
	return (suma);
}
}
