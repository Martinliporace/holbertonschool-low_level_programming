#include "main.h"

/**
* _isupper - Checks for uppercase character
 *
* @c: single letter input
*
* Return: Always 0 (Success)
**/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
