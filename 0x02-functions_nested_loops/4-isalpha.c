#include "main.h"

/**
* _isalpha - check if a character is alphabrtic.
* @c: The character to be checked.
*
* Return: 1 if character is letter,lowercase or uppercase, 0 otherwise.
 */
int _islower(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
