#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print number from 0 to 9 on one line
 * Return: 0
 */
int main(void)
{
int i;

for (i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return (0);
}
