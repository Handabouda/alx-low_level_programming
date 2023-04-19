#include <stdio.h>
#ifndef function_pointers_H
#define function_pointers_H
#include <string.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif
