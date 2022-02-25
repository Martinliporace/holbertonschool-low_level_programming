#include <stdio.h>

/**
* main - prints the arguments passed into it.
* @argc: coso
* @argv: pum
*
*
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
