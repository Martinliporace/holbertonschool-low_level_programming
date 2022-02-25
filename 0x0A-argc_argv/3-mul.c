#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: coso
* @argv: pum
*
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int res;

	if (argc ==  3)
	{
		res = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	return (1);
}
