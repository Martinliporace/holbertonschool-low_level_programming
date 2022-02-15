#include "main.h"
/**
* *string_toupper - changes all lowercase letters of a string to uppercase.
* @a: string
*
* Description: show a string in uppercase
* Return: Always 0 (Success)
*/

char *string_toupper(char *a)

{
	int len = 0;

	while (a[len] != '\0')
	{
		if (a[len] >= 97 && a[len] <= 122)
		{
			a[len] = a[len] - 32;
		}
		len++;
	}
	return (a);
}
