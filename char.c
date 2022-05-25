//
// Created by perf3ctstyle on 25.05.2022.
//

#include <stdio.h>

int main(void) {
    char str[20] = "Hello!";
    char *p = str;
    char *first = &str[0];

    printf("Char str: %s\n", str);
    printf("Address of char str: %p\n", p);
    printf("Address of the first symbol of str: %p", first);
}