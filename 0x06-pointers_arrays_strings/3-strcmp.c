#include "main.h"
/**
* _strcmp - compares two strings.
* @s1: first string
* @s2: second string
* Description: show "0" if the two values are equal
* Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)

{
	int cont, val;

	cont = 0;
	while (s1[cont] == s2[cont] && s1[cont] != '\0')
	{
		cont++;
	}

	val = s1[cont] - s2[cont];
	return (val);
}
