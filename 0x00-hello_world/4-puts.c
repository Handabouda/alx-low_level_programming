#!/bin/bash
echo '#include <stdio.h>' | cat - <(echo 'int main(void){puts("Programming is like building a multilingual puzzle");return (0);}') | gcc -x c -o puzzle - && ./puzzle && rm puzzle

