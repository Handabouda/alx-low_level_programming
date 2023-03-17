#!/bin/bash
gcc -Wall -o program -xc - <<<'int main(void){printf("with proper grammar, but the outcome is a piece of art,\n");return 0;}'; ./program
