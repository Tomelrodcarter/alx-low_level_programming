#include <stdio.h>

/**
 * main - A program that prints the various size of the computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("the sizes of char: %lu byte(s)\n", (unsigned long)
	sizeof(a));
	printf("the sizes of int: %lu byte(s)\n", (unsigned long)
	sizeof(b));
	printf("the sizes of long int: %lu byte(s)\n", (unsigned long)
	sizeof(c));
	printf("the sizes of long long int: %lu byte(s)\n", (unsigned long)
	sizeof(d));
	printf("the sizes float: %lu byte(s)\n", (unsigned long)
	sizeof(f));
	return (0);
}
