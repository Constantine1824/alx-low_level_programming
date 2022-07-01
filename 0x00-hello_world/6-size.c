/**
 * main - Entry point
 * Return:0
*/
#include <stdio.h>
int main(void)
{
	char c;
	int i;
	long int v;
	long long int d;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(v));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
