#ifndef MAIN_H
#define MAIN_H

#define CAPACITY 50000

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long hash_function(char* str);

/* Structure to define Hashtable Item */
typedef struct ht_item
{
	char *key;
	char * value;
} ht_item;

/* Structure to define a Hashtable */
typedef struct hash_table
{
	/* Array of pointers to items */
	ht_item** items;
	int size; /* size of slots */
	int count; /* curent count of items inserted in table */
} hash_table;


ht_item* create_item(char* key, char* value);
hash_table* create_table(int size);
void print_table(hash_table* table);

/* Free functions */
void free_item(ht_item* item);
void free_table(hash_table* table);

#endif /* MAIN_H */
