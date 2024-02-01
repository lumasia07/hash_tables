#include "main.h"

/* Main File */
int main()
{
	char input[50] = "Cau";
	unsigned long hash_value = hash_function(input);

	printf("Hash value: %lu\n", hash_value);

	return (0);
}
