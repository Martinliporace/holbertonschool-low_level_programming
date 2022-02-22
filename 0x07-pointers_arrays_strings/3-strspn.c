#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @accept: coso
* @s: pum
*
* Description: show a result
* Return: number of bytes in the initial segment of s
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
