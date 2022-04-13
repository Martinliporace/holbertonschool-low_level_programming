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


long int a = 1;
long int b = 2;
long int r;
long int r2 = 0;

	for (r = 0; r < 4000000; r = a + b)
	{
	if ((r % 2) == 0)
		r2 += r;


	a = b;
	b = r;
	}
printf("%ld", r2);
printf("\n");
return (0);

}
