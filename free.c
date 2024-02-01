#include "main.h"

void free_item(ht_item* item)
{
	free(item->key);
	free(item->value);
	free(item);
}

void free_table(hash_table* table)
{
	int i;
	for (i = 0; i < table->size; i++)
	{
		ht_item* item = table->items[i];

		if (item != NULL)
			free_item(item);
	}

	free(table->items);
	free(table);
}
