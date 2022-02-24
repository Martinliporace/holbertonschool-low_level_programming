#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: coso
* Return: pum
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* comp - compares each character of the string.
* @s: coso
* @n1: pum
* @n2: ahre
* Return: coso
*/

int comp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
* is_palindrome - detects if a string is a palindrome.
* @s: coso
* Return: 1 if s is a palindrome, 0 if not.
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
