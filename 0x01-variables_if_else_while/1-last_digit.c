/**
 * main- Entry point
 * Return: 0
 */
#include <stdlib.h>
#include <time.h>
int main(void) 
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y=n % 10;
	if (y > 5) 
	{
		printf("Last digit of %d 
