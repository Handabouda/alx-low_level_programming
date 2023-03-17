#!/bin/bash
echo "#include <stdio.h>" > size.c
echo "int main(void) {" >> size.c
echo "    printf(\"Size of char: %zu byte(s)\\n\", sizeof(char));" >> size.c
echo "    printf(\"Size of int: %zu byte(s)\\n\", sizeof(int));" >> size.c
echo "    printf(\"Size of long int: %zu byte(s)\\n\", sizeof(long int));" >> size.c
echo "    printf(\"Size of long long int: %zu byte(s)\\n\", sizeof(long long int));" >> size.c
echo "    printf(\"Size of float: %zu byte(s)\\n\", sizeof(float));" >> size.c
echo "    printf(\"Size of double: %zu byte(s)\\n\", sizeof(double));" >> size.c
echo "    printf(\"Size of long double: %zu byte(s)\\n\", sizeof(long double));" >> size.c
echo "    return 0;" >> size.c
echo "}" >> size.c
gcc -m32 -Wall size.c -o size32
gcc -Wall size.c -o size64
echo "Running on 32-bit architecture:"
./size32
echo ""
echo "Running on 64-bit architecture:"
./size64
rm size.c size32 size64
