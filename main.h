#ifndef MAIN_H
#define MAIN_H

#define CAPACITY 50000

#include <stdio.h>

/* Hash function */
unsigned long hash_function(char* str);

/* Structure to define a Hashtable */
typedef struct hash_table
{
	/* Array of pointers to items */
	ht_item** items;
	int size;
	int count;
} hash_table;


#endif /* MAIN_H */
