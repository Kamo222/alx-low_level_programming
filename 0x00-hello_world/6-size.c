#include <stdio.h>
/**
 * main - Entry poit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byts(s)\n", sizeof(char));
	printf("Size of a int: %lu byts(s)\n", sizeof(int));
	printf("Size of a double: %lu byts(s)\n", sizeof(double));
	printf("Size of a long int: %lu byts(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byts(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byts(s)\n", sizeof(float));

	return (0);
}
