#include <stdio.h>
/**
 * main - Entry poit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	double c;
	long int d;
	long long int e;
	float f;
	printf("Size of a char: %lu byts(s)\n", (unsigned int)sizeof(a));
	printf("Size of an int: %lu byts(s)\n", (unsigned int)sizeof(b));
	printf("Size of a double: %lu byts(s)\n", (unsigned int)sizeof(c));
	printf("Size of a long int: %lu byts(s)\n", (unsigned int)sizeof(d));
	printf("Size of a long long int: %lu byts(s)\n", (unsigned int)sizeof(e));
	printf("Size of a float: %lu byts(s)\n", (unsigned int)sizeof(f));
	return (0);
}
