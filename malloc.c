//
// Created by perf3ctstyle on 28.05.2022.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    char s[20];
    scanf("%s", s);

    char *t = malloc(strlen(s + 1)); // plus 1 for \0
    if (t == NULL) {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
}