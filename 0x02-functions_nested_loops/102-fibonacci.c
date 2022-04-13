#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
* followed by a new line.
*
*
* Return: 0
**/


int main(void)

{

int cont;
long int a = 1;
long int b = 2;
long int r;

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (cont = 0; cont < 48; cont++)

	{
	r = a + b;
	printf(", %ld", r);
	a = b;
	b = r;
	}
printf("\n");
return (0);






}
