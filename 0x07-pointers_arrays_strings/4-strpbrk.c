#include "main.h"

/**
* _strpbrk - gets the length of a prefix substring.
* @accept: coso
* @s: pum
*
* Description: show a result
* Return: number of bytes in the initial segment of s
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
