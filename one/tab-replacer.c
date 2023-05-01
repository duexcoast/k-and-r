#include <stdio.h>

#define BACKSLASH "\\\\"

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            c = '\0';
            printf("%s", BACKSLASH);
        }
        if (c == '\b') {
            c = '\0';
            printf("%s", BACKSLASH);
        }
        putchar(c);
    }

    return 0;
}
