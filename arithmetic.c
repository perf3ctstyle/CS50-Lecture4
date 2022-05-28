//
// Created by perf3ctstyle on 28.05.2022.
//

#include <stdio.h>

int main(void) {
    char *s = "HI!";
    printf("%c\n", *s); // H
    printf("%c\n", s[0]); // H

    printf("%c\n", *(s + 1)); // I
    printf("%c\n", s[1]); // I

    printf("%c\n", *(s + 2)); // !
    printf("%c\n", s[2]); // !

    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
    printf("%i\n", numbers[0]);
    printf("%i\n", *numbers); // treating the array variable as a pointer to its first element

    printf("%i\n", numbers[1]);
    printf("%i\n", *(numbers + 1));

    printf("%i\n", numbers[2]);
    printf("%i\n", *(numbers + 2));
}