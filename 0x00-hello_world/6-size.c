/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
	char c;
	int i;
	long int v;
	long long int d;
	float f;

	printf("Size of a char: %zu byte(s)", sizeof(c));
	printf("Size of an int: %zu byte(s)", sizeof(i));
	printf("Size of a long int: %zu byte(s)", sizeof(v));
	printf("Size of a long long int: %zu byte()", sizeof(d));
	printf("Size of a float: %zu byte(s)", sizeof(f));
	return (0);
}
