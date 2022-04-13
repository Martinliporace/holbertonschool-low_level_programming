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
long int r = 0;
long int r2 = 0;

	while (r <= 4000000)
	{
	r = a + b;
	a = b;
	b = r;
	if ((a % 2) == 0)
		{
		r2 += a;
		}





	}
printf("%ld", r2);
printf("\n");
return (0);

}
