#include <stdio.h>

/**
* main - Entry point
*
* Return: prints the sum of all the multiples of 3 or 5 below 1024
**/

int main(void)
{
int n, r;
r = 0;
for (n = 0; n < 1024 ; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))

{
r += n;
}
}
printf("%d\n", r);

return (0);
}


