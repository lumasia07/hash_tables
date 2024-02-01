#include "main.h"

unsigned long hash_function(char* str)
{
	int j;
	unsigned long i = 0; /* Stores hash value */

	/* Iterates through each character in string inputed */
	for (j = 0; str[j]; j++)
		i += str[j]; /* adds ASCII value to hash value */

	return (i % CAPACITY); /* Calculates remainder & returns hash value */
}
