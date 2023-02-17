#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digits of base 16 from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int number = 0;
char alphabet = 'A';

while (number <= 9)
{
	putchar(number + '0');
	++number;
}
while (alphabet <= 'F')
{
	putchar(alphabet);
	++alphabet;
}
putchar('\n');
return (0);
}
