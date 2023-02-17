#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabets in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';
	char alphaBet = 'B';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	++alphabet;
	}

	while (alphaBet <= 'Z')
	{
	putchar(alphaBet);
	++alphaBet;
	}
	putchar('\n');

	return (0);
}
