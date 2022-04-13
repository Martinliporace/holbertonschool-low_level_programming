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
unsigned long int a = 1;
unsigned long int b = 2;
unsigned long int r;

	printf("%lu, ", a);
	printf("%lu", b);

	for (cont = 0; cont < 96; cont++)

	{
	r = a + b;
	printf(", %lu", r);
	a = b;
	b = r;
	}
printf("\n");
return (0);






}
