#ifndef MAIN_H
#define MAIN_H

#define CAPACITY 50000

#include <stdio.h>

/* Hash function */
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


#endif /* MAIN_H */
