#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lower case alphabets backward
 * Return: 0
 */
int main(void)
{
int c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
