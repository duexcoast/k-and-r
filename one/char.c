#include <stdio.h>
#include <stdlib.h>

int main() {
    char a, upperA, one;
    a = 'a';
    one = '1';
    upperA = 'A';
    // printf("a = %c\t%d\n", a, a);
    // printf("A = %c\t%d\n", upperA, upperA);
    // printf("one = %c\t%d\n", one, one);

    int result = 5 - one;
    int numericValue = one - '0';
    printf("result: %d", result);
    printf("numeric value: %d", numericValue);
    return 0;
}
