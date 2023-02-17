#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet from z to a
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char alphabet = 'z';

while (alphabet <= 'z' && alphabet >= 'a')
{
	putchar(alphabet);
	--alphabet;
}
putchar('\n');
return (0);
}
