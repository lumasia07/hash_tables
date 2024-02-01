#include "main.h"

ht_item* create_item(char* key, char* value)
{
	/* Creates a pointer to new hash table item */
	ht_item* item = (ht_tem*) malloc(sizeof(ht_item));

	/* Allocate memory for the key and copy the content */
	item->key = (char*) malloc(strlen(key) + 1);
	strcpy(item->key, key);

	/* Allocate memory for the key and copy content */
	item->value = (char*) malloc(strlen(value) + 1);
	strcpy(item->value, value);

	/* Return pointer to item */
	return item;
}

