/**
 * main- Entry point
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char lowchar;

	for (lowchar = 'a'; lowchar <= 'z'; lowchar++)
	{
		putchar(lowchar);
	};
	putchar('\n');
	return (0);
}
