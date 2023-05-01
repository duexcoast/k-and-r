
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
int main(void) {
    printf("Ranges for integer data types in C\n\n");
    printf("------------------------------------------------------------\n");
    printf("int8_t    %20d  %20d\n", SCHAR_MIN, SCHAR_MAX);
    printf("int16_t   %20d  %20d\n", SHRT_MIN, SHRT_MAX);
    printf("int32_t   %20d  %20d\n", INT_MIN, INT_MAX);
    printf("int64_t   %20lld  %20lld\n", LLONG_MIN, LLONG_MAX);
    printf("uint8_t   %20d  %20d\n", 0, UCHAR_MAX);
    printf("uint16_t  %20d  %20d\n", 0, USHRT_MAX);
    printf("uint32_t  %20d  %20u\n", 0, UINT_MAX);
    printf("uint64_t  %20d  %20llu\n", 0, ULLONG_MAX);
    printf("\n");
    printf("============================================================\n\n");
    printf("Ranges for real number data types in C\n\n");
    printf("------------------------------------------------------------\n");
    printf("flaot        %14.7g  %14.7g\n", FLT_MIN, FLT_MAX);
    printf("double       %14.7g  %14.7g\n", DBL_MIN, DBL_MAX);
    printf("long double  %14.7Lg  %14.7Lg\n", LDBL_MIN, LDBL_MAX);
    printf("\n");
    return 0;
}
A 10 B 11 C 12 D 13 E 14 F 15

    H.0x25B9D2 B
        .0010 0101 1011 1001 1101 0010

    B.1010 1110 0100 1001 H
        .A E 4 9 0xAE49

    H.0xA8B3D B
        .1010 1000 1011 0011 1101

    B.0011 0010 0010 1101 1001 0110 H
        .3 2 2 D 9 6 0x322D96

    H.0x100 0x101 0x102 0x103 B.0001 0000 0000 0001 0000 0001 0001 0000
