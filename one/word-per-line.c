#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int state, c;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else {
            if (state == OUT) {
                printf("\n");
                state = IN;
            }
            putchar(c);
        }
    }

    return 0;
}
