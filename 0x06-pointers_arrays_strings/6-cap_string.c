#include "main.h"
/**
* *cap_string - capitalizes all words of a string.
* @s: string
*
* Description: show a string in uppercase
* Return: Always 0 (Success)
*/

char *cap_string(char *s)

{
	int pos = 0;
	int cont;
	char signos[] = " \t\n,;.!?\"(){}";

	while (s[pos] != '\0')
	{
		if ((s[pos] >= 'a') && (s[pos] <= 'z'))
{
			if (pos == 0)
				s[pos] = s[pos] - 32;
			else
				for (cont = 0; cont <= 12; cont++)
					if (signos[cont] == s[pos - 1])
						s[pos] = s[pos]  - 32;
}
		pos++;
	}
	return (s);
}
