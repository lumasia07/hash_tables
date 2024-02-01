#include "main.h"

hash_table* create_table(int size)
{
	int i;

	/* Creates a new Hashtable */
	hash_table* table = (hash_table*) malloc(sizeof(hash_table));
	table->size = size;
	table->count = 0;
	table->items = (ht_item**) calloc(table->size, sizeof(ht_item*));

	for (i = 0; i < table->size; i++)
		table->items[i] = NULL;

	return (table);
}

	
