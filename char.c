//
// Created by perf3ctstyle on 25.05.2022.
//

#include <stdio.h>

int main(void) {
    char str[20] = "Hello!";
    char *p = str;
    char *first = &str[0];
    char first_symbol = *first;

    printf("Char str: %s\n", str);
    printf("Address of char str: %p\n", p);
    printf("Address of the first symbol of str: %p\n", first);
    printf("Copy of the first symbol of str: %c\n", first_symbol);

    first_symbol = 'A';

    printf("Copy of the first symbol of str: %c\n", first_symbol);
    printf("Char str that hasn't changed: %s\n", str);
}