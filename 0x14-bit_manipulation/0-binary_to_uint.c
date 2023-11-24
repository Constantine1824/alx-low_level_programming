#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Convert a binary string to unsigned int
 * @b: The binary string to be converted
 *
 * Return: unsigned int if the number is binary and not NULL. 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	};
	while (*b != '\0')
	{
		if ((*b != '0' && *b != '1') || *b == '\0')
		{
			return (0);
		};
		result = (result << 1) + (*b - '0');
		b++;
	};
	return (result);
}

