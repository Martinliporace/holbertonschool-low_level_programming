#include "main.h"
/**
* *leet -  encodes a string into 1337.
* @a: string
*
*
* Return: pointer to a
*/

char *leet(char *a)

{
	int a_cont, cont;
	char letras[] = "aAeEoOtTlL";
	char nums[] = "4433007711";


	a_cont = 0;
	while (a[a_cont] != '\0')

	{
		cont = 0;
		while (cont < 10)
		{
			if (letras[cont] == a[a_cont])
			{
				a[a_cont] = nums[cont];
			}
			cont++;
		}
		a_cont++;
	}
	return (a);
}
