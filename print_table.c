#include "main.h"

void print_table(hash_table* table)
{
	printf("\nHash Table\n____________________\n");

	int i;
	for (i = 0; i < table->size; i++)
	{
		if (table->items[i])
		{
			printf("Index:%d, Key:%s, Value:%s\n", i, table->items[i] -> key, table->items[i]->value);
		}
	}

	printf("_______________________\n\n");
}
