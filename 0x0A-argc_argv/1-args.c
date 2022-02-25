#include <stdio.h>

/**
* main - prints the number of arguments passed into it.
* @argc: coso
* @argv: pum
*
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
if (argv)
printf("%d\n", argc - 1);
return (0);
}
