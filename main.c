#include "main.h"

/* Main File */
int main(int ac, char *av[])
{
	if (ac != 2)
	{
		printf("Usage: %s <string>\n", av[0]);
		return (1);
	}

	char *input = av[1];
	unsigned long hash_value = hash_function(input);

	printf("Hash value: %lu\n", hash_value);

	return (0);
}
