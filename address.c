//
// Created by perf3ctstyle on 25.05.2022.
//

#include <stdio.h>

int main(void) {
    int n = 50;
    int *p = &n;
    
    printf("Address of p: %p\n", p);
    printf("Address of n: %p\n", &n);
    printf("Number stored in p(dereference): %i\n", *p);
}