#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet
 *
 * Return: Always O (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	++alphabet;
	}
	putchar('\n');
	return (0);
}
