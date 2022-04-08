#include <stdio.h>

/**
 * main - print all posible conditions of two different digits,
 *        in asceding order, separated by comma followed by space.
 *
 * Return: Always 0
 */
int main(void)
{
int digit1,digit2;

for (digit1 = 0; digit2 < 9; digit++c)
{
for (digit2 = digit1 + 1; digit2 < 10; digit++c)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');

if (digit1==8 && digit2 == 9)

putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
