#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print a random number and states whether
 *         itis positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main (void)
{
int n;

srand(time(0));
n = rand () - RAND_MAX /2;

if (n > 1)
printif("% is positive\n", n);
else if (n < 0)
printif("% is negative\n", n);
else

printif("% is zero\n", n);
else if (n < 0)

return (0);
}
