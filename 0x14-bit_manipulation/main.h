#ifndef _MAIN_H
#define _MAIN_H
#include <string.h>
#include <stdlib.h>
#include <math.h>

int _strlen(const char *str);
int putchar(int c);
int get_bit(unsigned long int n, unsigned int index);
int power(int b, int ex);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);

#endif
