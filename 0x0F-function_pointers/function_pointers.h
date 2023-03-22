#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
/*
 * Desc: Header file containing prototypes for all functions
 * used in the 0x0E-function_pointers directory.
 */

#include <stdlib.h>


void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif
