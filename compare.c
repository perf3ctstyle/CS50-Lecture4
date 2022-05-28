//
// Created by perf3ctstyle on 28.05.2022.
//

#include <stdio.h>
#include <string.h>

int compare(const char *s, const char *t);
void printEquality(int equal);

int main(void) {
    char str1[20];
    printf("Enter the first string:");
    scanf("%str1", str1);

    char str2[20];
    printf("Enter the second string:");
    scanf("%str1", str2);

    printf("\nAddress of the first str: %p\n", str1);
    printf("First str: %str1\n", str1);
    printf("\nAddress of the second str: %p\n", str2);
    printf("Second str: %str1\n", str2);

    int equal = compare(str1, str2);
    printEquality(equal);

    int equalStrCmp = strcmp(str1, str2);
    printEquality(equalStrCmp);
}

int compare(const char *s, const char *t) {
    return (s == t) ? 0 : 1;
}

void printEquality(int equal) {
    if (equal == 0) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
}