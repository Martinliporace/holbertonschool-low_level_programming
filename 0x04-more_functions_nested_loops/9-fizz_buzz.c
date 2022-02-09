#include "main.h"
#include <stdio.h>

/**
* main - program that prints the numbers from 1 to 100
* Description: multiples of 3 = Fizz, multiples of 5 = Buzz
* Return: allway 0
*
*/

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
}
return (0);
}
