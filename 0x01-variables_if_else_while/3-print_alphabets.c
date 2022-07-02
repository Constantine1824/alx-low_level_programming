/**
 * main- The function returns characters in upper and lowe case
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
